/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 18:02:20 by dfontech          #+#    #+#             */
/*   Updated: 2024/03/04 19:18:03 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int num, int *counter)
{
	int		i;
	char	*base;

	base = "-2147483648";
	i = 0;
	if (num == -2147483648)
	{
		ft_putstr(base, counter);
		return ;
	}
	if (num < 0)
	{
		ft_putchar('-', counter);
		num = -num;
	}
	if (num > 9)
	{
		ft_putnbr(num / 10, counter);
	}
	ft_putchar((num % 10) + '0', counter);
}
