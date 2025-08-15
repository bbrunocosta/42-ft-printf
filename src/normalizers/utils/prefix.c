/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prefix.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 17:51:32 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/15 17:59:17 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"
#include "listft.h"
#include "ft_printf.h"
#include "printft.h"

void	prefix(t_printf_context *context, const char *text)
{
	t_node		*node;
	t_string	*prefix;

	prefix = str_dup(text);
	if (!prefix)
		return ;
	node = lst_new_node(prefix);
	if (!node)
		return ;
	lst_add_first(&context->parts, node);
	context->parts_len += prefix->length;
}
