/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_flag.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 15:00:46 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/14 15:07:46 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <normalizers.h>
#include <parsers.h>

t_printf_flag	to_flag(unsigned char c)
{
	static t_printf_flag	flag_chr_map[256] = {		
	['+'] = PLUS,
	['-'] = MINUS,
	['0'] = ZERO,
	['.'] = DOT,
	['#'] = HASTAG,
	[' '] = SPACE
	};

	return (flag_chr_map[c]);
}
