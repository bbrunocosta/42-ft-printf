/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lst_delete.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 16:20:21 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/06 16:25:21 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "listft.h"

void	lst_delete(t_list *lst, void (*free_content)(void*))
{
	lst_delete_all(lst, free_content);
	free(lst);
}
