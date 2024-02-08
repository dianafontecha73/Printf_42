# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 16:00:08 by dfontech          #+#    #+#              #
#    Updated: 2024/02/08 17:47:07 by dfontech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME	=	libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SOURCES =	ft_printf.c\
			ft_putchar_pf.c\
			ft_puthex_pf.c\
			ft_putnbr_pf.c\
			ft_putptr_pf.c\
			ft_putstr_ft.c\
			ft_putuint_pf.c\
			ft_aux_pf.c


OBJS = $(SORCES:.c=.o)

$(NAME) : $(OBJS)
	@ar crs $(NAME) $(OBJS)

all: $(NAME)



clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) &(NAME)

re: fclean all

.PHONY: all clean fclean re