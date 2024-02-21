# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/25 16:00:08 by dfontech          #+#    #+#              #
#    Updated: 2024/02/21 16:13:08 by dfontech         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #



NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

SOURCES =	ft_printf.c\
			ft_putchar.c\
			ft_puthex.c\
			ft_putstr.c\
			ft_putptr.c\
			ft_putnbr.c\
			ft_putuint.c


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