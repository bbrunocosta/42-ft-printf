/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_content_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/15 12:48:56 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/15 12:54:56 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "listft.h"
#include "stringft.h"

static size_t	predicate(t_node *node)
{
	return (((t_string *)node->content)->length);
}

size_t	get_content_len(t_list *lst)
{
	return (lst_sum(lst, predicate));
}
