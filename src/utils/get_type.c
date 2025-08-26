/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_type.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 01:34:39 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/26 01:40:24 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printft.h"
#include "parsers.h"

int	get_type(char **ptr, t_printf_context *context)
{
	if (!is_type(**ptr))
		return (0);
	context->type = to_type(**ptr);
	(*ptr)++;
	return (1);
}
