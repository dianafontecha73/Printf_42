/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:12:04 by dfontech          #+#    #+#             */
/*   Updated: 2024/02/21 18:18:43 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int num)
{
	int		i;
	char	*base;
	
	base = "0123456789abcdef";
	i = 0;
	if (num < 16)
		i += ft_putchar(*(base + num));
	else
	{
		i += ft_puthex(num / 16);
		i += ft_puthex(num % 16);
	}
	return (i);
}
/*
int main ()
{
	unsigned int num = 7000;
	int n = ft_puthex(num);
	printf("%d\n", n);
	printf("%x\n", num);
	return(0);
}
*/