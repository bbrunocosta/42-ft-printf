/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_content.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 01:32:53 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/26 01:40:08 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "listft.h"
#include "stringft.h"

static size_t	predicate(t_node *node)
{
	return (put_string((t_string *)node->content));
}

ssize_t	print_content(t_list *lst)
{
	size_t	len;

	len = lst_sum(lst, predicate);
	lst_delete_all(lst, str_free);
	return (len);
}
