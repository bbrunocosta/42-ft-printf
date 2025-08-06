/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_delete_all.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 13:57:21 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/06 14:02:06 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "listft.h"

void	lst_delete_all(t_list *lst, void (*free_content)(void*))
{
	while (lst->last)
		lst_delete_node(lst->last, free_content);
}
