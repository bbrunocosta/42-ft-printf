/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_unsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 22:44:00 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/13 22:52:45 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include <stddef.h>
#include "stringft.h"
#include "mathft.h"
#include "printft.h"
#include "listft.h"

void	parse_unsigned(va_list *args, t_printf_context *context)
{
	t_list			*lst;
	t_node			*node;
	unsigned int	value;
	size_t			len;

	len = 0;
	value = va_arg(*args, unsigned int);
	lst = &context->parts;
	node = lst_new_node(to_string_base_prefix(value, "0123456789", 10));
	if (value == 0)
		context->is_zero = 1;
	lst_add_last(lst, node);
	context->parts_len += len;
}
