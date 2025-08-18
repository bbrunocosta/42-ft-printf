/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_zero.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:53:44 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/18 15:04:59 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "normalizers.h"
#include "stringft.h"

size_t	get_content_len(t_list *lst);
void	pad_content_left(t_printf_context *context, char c, size_t len);

static int	can_normalize(t_printf_context *context)
{
	if (
		!context->flags[ZERO]
		|| context->flags[MINUS]
		|| !context->width
		|| context->type == C
		|| context->type == S
		|| context->type == PCT
		|| context->flags[DOT]
		|| (context->type == P && context->is_zero)
	)
		return (0);
	return (1);
}

void	normalize_zero(t_printf_context *context)
{
	size_t	current_len;

	if (!can_normalize(context))
		return ;
	current_len = get_content_len(&context->parts);
	if (current_len >= context->width)
		return ;
	pad_content_left(context, '0', context->width - current_len);
}
