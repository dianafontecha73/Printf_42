/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:03:20 by dfontech          #+#    #+#             */
/*   Updated: 2024/01/26 12:09:57 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H
# include <unistd.h> //para escribir
#include <stdarg.h> //para va_start, va_arg, va_copy, va_end
#include <stdlib.h> //malloc, free

int	ft_printf(char const *format, ...);

#endif
