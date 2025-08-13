/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 20:39:15 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/13 20:50:00 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "stringft.h"
#include "mathft.h"
#include "printft.h"

void	parse_ptr(va_list *args, t_printf_context *context)
{
	t_string			*content;
	t_list				*lst;
	t_node				*node;
	unsigned long long	value;
	size_t				len;

	len = 0;
	lst = &context->parts;
	value = (unsigned long long) va_arg(*args, void *);
	if (value)
	{
		content = to_string_base_prefix(value, "0123456789abcdef", 16);
		node = lst_new_node(content);
		lst_add_last(lst, node);
		lst_add_first(lst, lst_new_node(str_dup("0x")));
		context->parts_len += (len + 2);
	}
	else
	{
		context->is_zero = 1;
		lst_add_first(lst, lst_new_node(str_dup("(nil)")));
		context->parts_len += 5;
	}
}
