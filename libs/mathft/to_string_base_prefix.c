/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   to_string_base_prefix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 17:31:44 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/08 17:42:44 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include <memft.h>
#include <stringft.h>

t_string	*to_string_base_prefix(unsigned long long number,
										const char *template, int base)
{
	t_string			*str;
	size_t				digit;
	unsigned long long	n;

	digit = 0;
	n = number;
	if (number == 0)
		return (str_dup("0"));
	while (n)
	{
		n /= base;
		digit++;
	}
	str = str_new(digit);
	if (!str)
		return (NULL);
	n = number;
	while (n)
	{
		str->value[digit - 1] = template[n % base];
		n /= base;
		digit--;
	}
	return (str);
}
