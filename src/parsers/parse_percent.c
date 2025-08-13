/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_percent.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 19:43:26 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/13 19:50:56 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "stringft.h"
#include "printft.h"
#include "listft.h"

void	parse_percent(va_list *args, t_printf_context *context)
{
	t_string	*content;
	t_list		*lst;
	t_node		*node;

	(void) args;
	lst = &context->parts;
	content = str_dup("%");
	node = lst_new_node(content);
	lst_add_last(lst, node);
	context->parts_len += content->length;
}
