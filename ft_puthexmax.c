/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexmax.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/21 18:08:43 by dfontech          #+#    #+#             */
/*   Updated: 2024/02/21 18:28:25 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthexmax(unsigned int num)
{
	int		i;
	char	*base;
	
	base = "0123456789ABCDEF";
	i = 0;
	if (num < 16)
		i += ft_putchar(*(base + num));
	else
	{
		i += ft_puthexmax(num / 16);
		i += ft_puthexmax(num % 16);
	}
	return(i);
}

int main ()
{
	unsigned int num = 5000;
	int n = ft_puthexmax(num);
	printf("\n%d\n", n);
	printf("%X\n", num);
	return(0);
}