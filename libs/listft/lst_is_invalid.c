/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_is_invalid.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 21:31:54 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/07 21:38:24 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "listft.h"

int	lst_is_invalid(const t_node *node)
{
	return (
		!node
		|| !node->list
		|| !node->list->first
		|| !node->list->last
		|| !node->list->count
		|| (node->list->first == node && node->prev)
		|| (node->list->last == node && node->next)
	);
}
