/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_hashtag.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 09:55:05 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/17 10:03:05 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "normalizers.h"
#include "stringft.h"

void	prefix(t_printf_context *context, const char *prefix, int insert_after);

void	normalize_hashtag(t_printf_context *context)
{
	if (context->is_zero || !context->flags[HASTAG])
		return ;
	if (context->type == X)
	{
		prefix(context, "0x", 0);
		return ;
	}
	if (context->type == XX)
	{
		prefix(context, "0X", 0);
		return ;
	}
}
