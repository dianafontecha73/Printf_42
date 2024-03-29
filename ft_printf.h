/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:03:20 by dfontech          #+#    #+#             */
/*   Updated: 2024/03/11 17:46:06 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H //cuidar de tabulacion como en código

# ifndef HEX_LOW_BASE //un if no definio (ifndef)
#  define HEX_LOW_BASE "0123456789abcdef"
# endif //siempre irá al erminar un a función
# ifndef HEX_UP_BASE
#  define HEX_UP_BASE "0123456789ABCDEF"
# endif //son las macros para ser usadas en la función

# include <unistd.h> //para escribir
# include <stdarg.h> //para va_start, va_arg, va_copy, va_end
# include <stdlib.h> //malloc, free
# include <stdio.h>

int		ft_printf(const char *format, ...);
void	ft_putchar(char c, int *counter);
void	ft_putstr(const char *s, int *counter);
void	ft_puthex(unsigned long long num, int *counter, char *base);
void	ft_putnbr(int n, int *counter);
void	ft_putunsignednbr(unsigned int num, int *counter);

#endif
