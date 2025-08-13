/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printft.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:09:08 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/13 09:23:53 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTFT_H
# define PRINTFT_H

# include "listft.h"

typedef enum e_printf_flag
{
	INVALID_FLAG,
	PLUS,
	SPACE,
	HASTAG,
	DOT,
	ZERO,
	MINUS,
	WIDTH,
	FLAG_COUNT
}	t_printf_flag;

typedef enum e_printf_type
{
	INVALID_TYPE = 0,
	C = 1,
	S = 2,
	P = 3,
	D = 4,
	I = 5,
	U = 6,
	X = 7,
	XX = 8,
	PCT = 9,
	TYPE_COUNT = 10
}	t_printf_type;

typedef struct s_printf_context
{
	enum e_printf_type	type;
	enum e_printf_flag	flags[FLAG_COUNT];
	struct s_list		parts;
	int					found_flags;
	int					is_negative;
	int					is_zero;
	size_t				width;
	size_t				precision;
	size_t				parts_len;
}	t_printf_context;

#endif
