/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_plus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 13:00:54 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/16 13:06:54 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "normalizers.h"

void	prefix(t_printf_context *context, const char *prefix);

void	normalize_plus(t_printf_context *context)
{
	if ((context->type != I && context->type != D && !(context->type == P
				&& !context->is_zero)) || !context->flags[PLUS])
		return ;
	if (!context->is_negative)
		prefix(context, "+");
}
