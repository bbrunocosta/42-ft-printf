/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 23:35:07 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/13 23:46:07 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "parsers.h"
#include "stringft.h"
#include "memft.h"

void	parse_char(va_list *args, t_printf_context *context);
void	parse_str(va_list *args, t_printf_context *context);
void	parse_ptr(va_list *args, t_printf_context *context);
void	parse_decimal(va_list *args, t_printf_context *context);
void	parse_int(va_list *args, t_printf_context *context);
void	parse_unsigned(va_list *args, t_printf_context *context);
void	parse_hex_lower(va_list *args, t_printf_context *context);
void	parse_hex_upper(va_list *args, t_printf_context *context);
void	parse_percent(va_list *args, t_printf_context *context);

void	parse_value(t_printf_type type, va_list *args,
			t_printf_context *context)
{
	static t_parser	parsers[TYPE_COUNT] = {	
	[C] = (t_parser) parse_char,
	[S] = (t_parser) parse_str,
	[P] = (t_parser) parse_ptr,
	[D] = (t_parser) parse_decimal,
	[I] = (t_parser) parse_int,
	[U] = (t_parser) parse_unsigned,
	[X] = (t_parser) parse_hex_lower,
	[XX] = (t_parser) parse_hex_upper,
	[PCT] = (t_parser) parse_percent
	};

	parsers[type](args, context);
}
