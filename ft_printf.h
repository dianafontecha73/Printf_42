/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:03:20 by dfontech          #+#    #+#             */
/*   Updated: 2024/02/21 18:04:24 by dfontech         ###   ########.fr       */
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
int		ft_putchar(char c);
int		ft_putstr(char *s, int *counter);

#endif