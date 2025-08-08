/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_sum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 22:56:24 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/07 23:03:54 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "listft.h"

size_t	lst_sum(t_list *lst, size_t(*f)(t_node*))
{
	size_t	accumulator;
	t_node	*node;

	if (!lst || !f)
		return (0);
	accumulator = 0;
	node = lst->first;
	while (node)
	{
		accumulator += f(node);
		node = node->next;
	}
	return (accumulator);
}
