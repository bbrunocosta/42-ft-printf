# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bcosta-b <bcosta-b@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
/*   Created: 2025/08/21 21:45:03 by bcosta-b          #+#    #+#             */
/*   Updated: 2025/08/21 22:15:03 by bcosta-b         ###   ########.fr       */
#                                                                              #
# **************************************************************************** #

NAME    = libftprintf.a
CC      = cc
CFLAGS  = -Wall -Wextra -Werror
AR      = ar rcs
RM      = rm -rf

OBJDIR  = obj

SRCS = \
	src/ft_printf.c \
	src/utils/get_flags.c \
	src/utils/get_precision.c \
	src/utils/get_type.c \
	src/utils/get_width.c \
	src/utils/print_content.c \
	src/normalizers/is_flag.c \
	src/normalizers/normalize.c \
	src/normalizers/normalize_dot.c \
	src/normalizers/normalize_hashtag.c \
	src/normalizers/normalize_minus.c \
	src/normalizers/normalize_width.c \
	src/normalizers/normalize_plus.c \
	src/normalizers/normalize_space.c \
	src/normalizers/normalize_zero.c \
	src/normalizers/to_flag.c \
	src/normalizers/utils/get_content_len.c \
	src/normalizers/utils/make_node_empty.c \
	src/normalizers/utils/pad_content_end.c \
	src/normalizers/utils/pad_content_left.c \
	src/normalizers/utils/pad_content_start.c \
	src/normalizers/utils/prefix.c \
	src/normalizers/utils/truncate_content.c \
	src/parsers/parse.c \
	src/parsers/parse_char.c \
	src/parsers/parse_decimal.c \
	src/parsers/parse_hex_lower.c \
	src/parsers/parse_hex_upper.c \
	src/parsers/parse_int.c \
	src/parsers/parse_percent.c \
	src/parsers/parse_ptr.c \
	src/parsers/parse_str.c \
	src/parsers/parse_unsigned.c \
	src/parsers/is_type.c \
	src/parsers/to_type.c \
	libs/charft/ft_isdigit.c \
	libs/charft/ft_isspace.c \
	libs/charft/ft_putchar.c \
	libs/listft/lst_add_after.c \
	libs/listft/lst_add_before.c \
	libs/listft/lst_add_first.c \
	libs/listft/lst_add_last.c \
	libs/listft/lst_delete.c \
	libs/listft/lst_delete_all.c \
	libs/listft/lst_delete_node.c \
	libs/listft/lst_foreach.c \
	libs/listft/lst_is_detached.c \
	libs/listft/lst_is_equal.c \
	libs/listft/lst_is_first.c \
	libs/listft/lst_is_invalid.c \
	libs/listft/lst_is_last.c \
	libs/listft/lst_new_node.c \
	libs/listft/lst_sum.c \
	libs/mathft/ft_abs.c \
	libs/mathft/ft_atoi.c \
	libs/mathft/to_string_base_prefix.c \
	libs/memft/ft_calloc.c \
	libs/memft/ft_memcpy.c \
	libs/memft/ft_memset.c \
	libs/stringft/ft_strlen.c \
	libs/stringft/put_str.c \
	libs/stringft/str_dup.c \
	libs/stringft/str_free.c \
	libs/stringft/str_new.c \
	libs/stringft/str_new_char.c \
	libs/stringft/str_new_values.c

	
OBJS = $(patsubst %.c,$(OBJDIR)/%.o,$(SRCS))


INC_FLAGS = \
	-Isrc \
	-Isrc/normalizers \
	-Isrc/parsers \
	-Ilibs/charft \
	-Ilibs/listft \
	-Ilibs/mathft \
	-Ilibs/memft \
	-Ilibs/stringft

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $@ $^

$(OBJDIR)/%.o: %.c
	@mkdir -p $(dir $@)
	$(CC) $(CFLAGS) $(INC_FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJDIR)

bonus: all

fclean: clean
	$(RM) $(NAME)

re: fclean all
