/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalizers.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 12:53:03 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/14 12:59:03 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NORMALIZERS_H
# define NORMALIZERS_H

# include "printft.h"

typedef void	(*t_normalizer)(t_printf_context *);

void			normalize(t_printf_context *context, t_printf_flag flag);
int				is_flag(unsigned char c);
t_printf_flag	to_flag(unsigned char c);

#endif
