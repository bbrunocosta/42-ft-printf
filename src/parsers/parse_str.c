/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_str.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 21:39:26 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/13 21:48:41 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "stringft.h"
#include "listft.h"
#include "printft.h"

void	parse_str(va_list *args, t_printf_context *context)
{
	char		*s;
	t_string	*content;
	t_list		*lst;
	t_node		*node;

	lst = &context->parts;
	s = va_arg(*args, char *);
	if (s)
		content = str_dup(s);
	else
	{
		content = str_dup("(null)");
		context->is_zero = 1;
	}
	node = lst_new_node(content);
	lst_add_last(lst, node);
	context->parts_len += content->length;
}
