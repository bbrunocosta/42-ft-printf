/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_flags.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/27 01:34:31 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/27 01:41:31 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "normalizers.h"
#include "memft.h"

void	get_flags(char **ptr, t_printf_context *context)
{
	t_printf_flag	flag;

	ft_memset(context->flags, INVALID_FLAG, sizeof(context->flags));
	while (**ptr && is_flag(**ptr) && **ptr != '.')
	{
		flag = to_flag(**ptr);
		context->flags[flag] = 1;
		context->found_flags = 1;
		(*ptr)++;
	}
}
