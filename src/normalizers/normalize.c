/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 21:55:01 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/18 22:04:01 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "normalizers.h"

void	normalize_width(t_printf_context *context);
void	normalize_plus(t_printf_context *context);
void	normalize_space(t_printf_context *context);
void	normalize_hashtag(t_printf_context *context);
void	normalize_zero(t_printf_context *context);
void	normalize_minus(t_printf_context *context);
void	normalize_dot(t_printf_context *context);

void	normalize(t_printf_context *context, t_printf_flag flag)
{
	static t_normalizer	normalizers[FLAG_COUNT] = {	
	[WIDTH] = normalize_width,
	[PLUS] = normalize_plus,
	[SPACE] = normalize_space,
	[HASTAG] = normalize_hashtag,
	[ZERO] = normalize_zero,
	[MINUS] = normalize_minus,
	[DOT] = normalize_dot
	};

	normalizers[flag](context);
}
