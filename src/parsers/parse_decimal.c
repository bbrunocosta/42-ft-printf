/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 14:41:13 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/13 14:51:13 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "stringft.h"
#include "listft.h"
#include "mathft.h"
#include "printft.h"

void	parse_decimal(va_list *args, t_printf_context *context)
{
	t_list		*lst;
	t_node		*node;
	size_t		len;
	int			value;

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
