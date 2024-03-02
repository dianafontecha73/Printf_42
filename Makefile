# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 16:00:08 by dfontech          #+#    #+#              #
#    Updated: 2024/02/28 19:36:28 by dfontech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SOURCES =	ft_putchar.c\
			ft_puthex.c\
			ft_putstr.c\
			ft_putnbr.c\
			ft_putunsignednbr.c\
			ft_printf.c\


OBJS = $(SOURCES:.c=.o)

$(NAME) : $(OBJS)
	@ar crs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) &(NAME)

re: fclean all

.PHONY: all clean fclean re
