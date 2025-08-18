/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 18:55:21 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/18 19:02:51 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "normalizers.h"
#include "stringft.h"

size_t	get_content_len(t_list *lst);
void	pad_content_start(t_printf_context *context, char c, size_t len);
void	pad_content_end(t_printf_context *context, char c, size_t len);

void	normalize_width(t_printf_context *context)
{
	size_t		current_len;

	if (!context->width || context->flags[MINUS])
		return ;
	current_len = get_content_len(&context->parts);
	if (current_len >= context->width)
		return ;
	pad_content_start(context, ' ', context->width - current_len);
}
