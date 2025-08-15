/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pad_content_end.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 14:51:57 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/15 14:59:57 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"
#include "listft.h"
#include "memft.h"
#include "printft.h"

void	pad_content_end(t_printf_context *context, char c, size_t len)
{
	t_node		*node;
	t_string	*pad;

	pad = str_new(len);
	if (!pad)
		return ;
	node = lst_new_node(pad);
	if (!node)
		return ;
	ft_memset(pad->value, c, len);
	lst_add_after(context->parts.last, node);
	context->parts_len += pad->length;
}
