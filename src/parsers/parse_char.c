/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_char.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:40:17 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/13 13:48:17 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "stringft.h"
#include "printft.h"

void	parse_char(va_list *args, t_printf_context *context)
{
	t_string	*content;
	t_list		*lst;
	t_node		*node;
	int			c;

	c = va_arg(*args, int);
	lst = &context->parts;
	content = str_new_char(c);
	node = lst_new_node(content);
	lst_add_last(lst, node);
	context->parts_len += content->length;
	if (!c)
		context->is_zero = 1;
}
