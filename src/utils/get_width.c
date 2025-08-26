/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_width.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 01:33:42 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/26 01:40:42 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printft.h"
#include "charft.h"
#include "mathft.h"

void	get_width(char **ptr, t_printf_context *context)
{
	if (!ft_isdigit((unsigned char)**ptr))
	{
		context->width = 0;
		return ;
	}
	context->flags[WIDTH] = 1;
	context->width = ft_atoi(*ptr);
	while (ft_isdigit((unsigned char)**ptr))
		(*ptr)++;
}
