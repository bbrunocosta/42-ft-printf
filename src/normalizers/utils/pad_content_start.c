/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pad_content_start.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 16:50:55 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/15 16:58:55 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"
#include "listft.h"
#include "memft.h"
#include "printft.h"

void	pad_content_start(t_printf_context *context, char c, size_t len)
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
	lst_add_first(&context->parts, node);
	context->parts_len += pad->length;
}
