/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_type.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 12:44:54 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/13 12:52:54 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parsers.h"
#include "normalizers.h"
#include "memft.h"

t_printf_type	to_type(unsigned char c)
{
	static t_printf_type	type_chr_map[256] = {
	['c'] = C,
	['s'] = S,
	['p'] = P,
	['d'] = D,
	['i'] = I,
	['u'] = U,
	['x'] = X,
	['X'] = XX,
	['%'] = PCT
	};

	return (type_chr_map[c]);
}
