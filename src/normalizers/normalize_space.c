/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_space.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 14:55:25 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/16 15:01:55 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "normalizers.h"

void	prefix(t_printf_context *context, const char *text);

void	normalize_space(t_printf_context *context)
{
	if ((context->type == D || context->type == I
			|| (context->type == P && !context->is_zero))
		&& !context->is_negative
		&& context->flags[SPACE]
		&& !context->flags[PLUS]
	)
		prefix(context, " ");
}
