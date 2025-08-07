/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_is_detached.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 18:16:01 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/07 18:20:31 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "listft.h"

int	lst_is_detached(const t_node *node)
{
	return (node && !node->list && !node->prev && !node->next);
}
