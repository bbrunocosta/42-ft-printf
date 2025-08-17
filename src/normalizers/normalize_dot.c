/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize_dot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 12:54:44 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/17 13:11:14 by bcosta-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "normalizers.h"
#include "stringft.h"
#include "listft.h"

size_t		get_content_len(t_list *lst);
void		truncate_content(t_list *lst, size_t len,
				t_printf_context *context);
void		pad_content_left(t_printf_context *context, char c, size_t len);
static int	has_zero_precision(t_printf_context *context);
static int	is_numeric(t_printf_type t);
void		make_content_empty(t_string *str);

static void	delete_tail_after(t_list *lst, t_node *node)
{
	if (!node)
		return ;
	while (lst->last != node)
		lst_delete_node(lst->last, str_free);
}

void	normalize_dot(t_printf_context *context)
{
	t_string	*str;

	str = context->parts.last->content;
	if (context->type == S && context->flags[DOT])
	{
		if (context->precision == 0)
		{
			make_content_empty(context->parts.first->content);
			delete_tail_after(&context->parts, context->parts.first);
		}
		else if (context->precision < str->length)
			truncate_content(&context->parts, context->precision, context);
		return ;
	}
	else if (!is_numeric(context->type)
		|| (context->type == P && context->is_zero))
		return ;
	else if (has_zero_precision(context))
		make_content_empty(context->parts.last->content);
	else if (context->precision > str->length)
		pad_content_left(context, '0', context->precision - str->length);
}

static int	is_numeric(t_printf_type t)
{
	return (t == D || t == I || t == U || t == X || t == XX || t == P);
}

static int	has_zero_precision(t_printf_context *context)
{
	return (!context->precision && context->is_zero);
}
