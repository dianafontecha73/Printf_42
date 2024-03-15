/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:59:15 by dfontech          #+#    #+#             */
/*   Updated: 2024/03/15 16:20:44 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list va, const char *s, int index, int *counter)
{
	if (s[index] == 'c')
		ft_putchar(va_arg(va, int), counter);
	if (s[index] == 's')
		ft_putstr(va_arg(va, char *), counter);
	if (s[index] == 'x' || s[index] == 'X')
	{
		if (s[index] == 'x')
			ft_puthex(va_arg(va, unsigned int), counter, "0123456789abcdef");
		if (s[index] == 'X')
			ft_puthex(va_arg(va, unsigned int), counter, "0123456789ABCDEF");
	}
	if (s[index] == 'd' || s[index] == 'i')
		ft_putnbr(va_arg(va, int), counter);
	if (s[index] == 'u')
		ft_putunsignednbr(va_arg(va, unsigned int), counter);
	if (s[index] == '%')
		ft_putchar('%', counter);
	if (s[index] == 'p')
	{
		ft_putstr("0x", counter);
		ft_puthex(va_arg(va, unsigned long long), counter, "0123456789abcdef");
	}
}

int	ft_printf(const char *cadena, ...)

{
	va_list	va;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(va, cadena);
	if (!cadena)
		return (0);
	while (cadena[i])
	{
		if (cadena[i] == '%')
		{
			i++;
			ft_format(va, cadena, i, &len);
		}
		else
			ft_putchar(cadena[i], &len);
		i++;
	}
	va_end(va);
	return (len);
}
