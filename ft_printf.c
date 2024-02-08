/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:59:15 by dfontech          #+#    #+#             */
/*   Updated: 2024/02/08 19:14:27 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_format(va_list va, char *cadena, size_t *counter)
{
	if( *cadena == 'c')
		ft_putchar_pf(va_arg(va, int), counter);
	else if (*cadena == 's')
		ft_putstr_pf(va_arg(va, char *), counter);
	else if (*cadena == 'p')
		ft_putptr_pf(va_arg(va, void *), counter);
	else if (*cadena == 'i' || *cadena == 'd')
		ft_putnbr_pf(va_arg(va, int), counter);
	else if (*cadena == 'u')
		ft_putuint_pf(va_arg(va, unsigned int), counter);
	else if (*cadena == 'x' || *cadena == 'X')
	{
		if (*cadena == 'x')
			ft_puthex_pf(va_arg(va, unsigned int), counter, HEX_LOW_BASE);
		else
			ft_puthex_pf(va_arg(va, unsigned int), counter, HEX_UPP_BASE); 
	}
	else if (*cadena == '%')
		ft_putchar_pf(*cadena, counter);
}

int	ft_printf(char const *cadena, ...)
{
	va_list va;
	size_t	counter;
	
	if(!cadena)
		return(NULL);
	counter = 0;
	va_start(va, cadena);
	while (*cadena)
	{
		if(*cadena == '%')
			{
				 cadena++;
				 ft_format(va, (char *)cadena, &counter);
			}
			else
				ft_putchar_pf(*cadena, &counter);
			cadena++;
	}
	va_end(va);
	return(counter);
	
}