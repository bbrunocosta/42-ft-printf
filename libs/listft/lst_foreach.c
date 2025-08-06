/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_foreach.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:54:06 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/06 17:00:51 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "listft.h"

void	lst_foreach(t_list *lst, void (*f)(t_node *))
{
	t_node	*node;

	if (!lst || !f)
		return ;
	node = lst->first;
	while (node)
	{
		f(node);
		node = node->next;
	}
}
