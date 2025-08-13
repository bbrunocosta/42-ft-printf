/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_hex_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:40:32 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/13 16:48:47 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "stringft.h"
#include "mathft.h"
#include "printft.h"

void	parse_hex_upper(va_list *args, t_printf_context *context)
{
	t_list			*lst;
	t_node			*node;
	unsigned int	value;
	size_t			len;

	len = 0;
	value = va_arg(*args, unsigned int);
	lst = &context->parts;
	node = lst_new_node(to_string_base_prefix(value, "0123456789ABCDEF", 16));
	if (value == 0)
		context->is_zero = 1;
	lst_add_last(lst, node);
	context->parts_len += len;
}
