/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsers.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 10:36:16 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/13 10:43:16 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PARSERS_H
# define PARSERS_H

# include <stdarg.h>
# include "stringft.h"
# include "printft.h"

typedef void(*t_parser)(va_list*, t_printf_context *context);

void			parse_value( t_printf_type type, va_list *args,
					t_printf_context *context);

t_printf_type	to_type(unsigned char c);
int				is_type(unsigned char c);

#endif
