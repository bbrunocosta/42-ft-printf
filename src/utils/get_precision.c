/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_precision.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 01:32:55 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/26 01:39:55 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printft.h"
#include "normalizers.h"
#include "charft.h"
#include "mathft.h"

void	get_precision(char **ptr, t_printf_context *context)
{
	if (**ptr == '.')
	{	
		context->flags[DOT] = 1;
		(*ptr)++;
		context->precision = ft_atoi(*ptr);
		while (ft_isdigit((unsigned char)**ptr))
			(*ptr)++;
	}
}
