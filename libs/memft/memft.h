/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 12:47:43 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/03 12:52:58 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMFT_H
# define MEMFT_H

# include<stddef.h>

void	*ft_calloc(size_t nmemb, size_t type_size);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
#endif
