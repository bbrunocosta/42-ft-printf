/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 18:44:10 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/13 18:54:25 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "stddef.h"
#include "stringft.h"
#include "mathft.h"
#include "printft.h"
#include "listft.h"

void	parse_int(va_list *args, t_printf_context *context)
{
	t_list		*lst;
	t_node		*node;
	int			value;
	size_t		len;

	len = 0;
	value = va_arg(*args, int);
	lst = &context->parts;
	node = lst_new_node(to_string_base_prefix(ft_abs(value), "0123456789", 10));
	lst_add_last(lst, node);
	context->parts_len += len;
	if (value == 0)
		context->is_zero = 1;
	if (value < 0)
	{
		context->is_negative = 1;
		lst_add_first(lst, lst_new_node(str_new_char('-')));
		context->parts_len ++;
	}
}
