/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   truncate_content.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 18:40:06 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/15 18:57:21 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "listft.h"
#include "stringft.h"
#include "printft.h"

void	make_content_empty(t_string *str);

static void	delete_tail_after(t_list *lst, t_node *node)
{
	if (!node)
		return ;
	while (lst->last != node)
		lst_delete_node(lst->last, str_free);
}

static void	delete_from_node(t_list *lst, t_node *node)
{
	delete_tail_after(lst, node);
	lst_delete_node(node, str_free);
}

static void	crop_content(t_list *lst, t_node *node, size_t len)
{
	t_string	*str;

	str = node->content;
	str->value[len] = '\0';
	str->length = len;
	if (node->next)
		delete_tail_after(lst, node);
}

void	truncate_content(t_list *lst, size_t len, t_printf_context *context)
{
	t_node		*node;
	t_string	*str;

	node = lst->first;
	if (len == 0 || context->is_zero)
	{
		make_content_empty(lst->first->content);
		delete_tail_after(lst, node);
		return ;
	}
	while (node && len)
	{
		str = (t_string *)node->content;
		if (len < str->length)
		{
			crop_content(lst, node, len);
			return ;
		}
		len -= str->length;
		node = node->next;
	}
	if (len == 0 && node)
		delete_from_node(lst, node);
}
