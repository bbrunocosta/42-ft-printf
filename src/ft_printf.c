/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 18:09:06 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/20 18:29:51 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "printft.h"
#include "stringft.h"
#include "charft.h"
#include "normalizers.h"
#include "parsers.h"
#include "memft.h"

ssize_t	print_content(t_list *lst);
void	get_flags(char **ptr, t_printf_context *context);
void	get_width(char **ptr, t_printf_context *context);
int		get_precision(char **ptr, t_printf_context *context);
int		get_type(char **ptr, t_printf_context *context);

static size_t	predicate(t_node *node)
{
	t_string	*str;

	str = (t_string *)node->content;
	return (put_string(str));
}

static int	internal(char **ptr, va_list *args)
{
	t_printf_context	context;
	t_printf_flag		flag;
	int					count;

	count = 0;
	ft_memset(&context, 0, sizeof(t_printf_context));
	get_flags(ptr, &context);
	get_width(ptr, &context);
	get_precision(ptr, &context);
	get_type(ptr, &context);
	if (context.type != INVALID_TYPE)
	{
		parse_value(context.type, args, &context);
		flag = INVALID_FLAG;
		while (++flag < FLAG_COUNT)
			if (context.flags[flag])
				normalize(&context, flag);
		count += lst_sum(&context.parts, predicate);
		lst_delete_all(&context.parts, str_free);
	}
	return (count);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	char	*ptr;
	int		count;

	if (!str)
		return (-1);
	va_start(args, str);
	ptr = (char *)str;
	count = 0;
	while (*ptr)
	{
		if (*ptr != '%')
		{
			count += ft_putchar(*ptr++);
			continue ;
		}
		ptr++;
		count += internal(&ptr, &args);
	}
	va_end(args);
	return (count);
}
