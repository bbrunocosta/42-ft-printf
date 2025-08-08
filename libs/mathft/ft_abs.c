/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 12:46:06 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/08 12:50:36 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long long	ft_abs(long long number)
{
	if (number > 0)
		return (number);
	return (0ULL - (unsigned long long) number);
}
