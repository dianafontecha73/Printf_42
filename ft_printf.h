/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:03:20 by dfontech          #+#    #+#             */
/*   Updated: 2024/02/19 20:07:34 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H //cuidar de tabulacion como en código
# include <unistd.h> //para escribir
# include <stdarg.h> //para va_start, va_arg, va_copy, va_end
# include <stdlib.h> //malloc, free

# ifndef HEX_LOW_BASE //un if no definio (ifndef)
#  define HEX_LOW_BASE "123456789abcdef"
# endif //siempre irá al erminar un a función
# ifndef HEX_UP_BASE "123456789ABCDEF"
#  define HEX_UP_BASE //son las macros para ser usadas en la función

int		ft_printf(char const *format, ...);
void  	ft_putchar(char c, int *counter);
void	ft_putstr(char *s, int *counter);


#endif
