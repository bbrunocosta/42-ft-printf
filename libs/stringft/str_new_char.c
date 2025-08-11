/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_new_char.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 14:53:53 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/11 15:00:08 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stringft.h"
#include "stddef.h"

t_string	*str_new_char(char c)
{
	t_string	*str;

	str = str_new(1);
	if (!str)
		return (NULL);
	str->value[0] = c;
	return (str);
}
