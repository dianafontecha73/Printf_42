/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:12:04 by dfontech          #+#    #+#             */
/*   Updated: 2024/03/13 19:06:27 by dfontech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned long long nbr, int *count, char *base)
{
	char	storage[16];
	int		i;

	i = 0;
	if (nbr == 0)
		ft_putchar ('0', count);
	while (nbr > 0)
	{
		storage[i] = base[nbr % 16];
		i ++;
		nbr = nbr / 16;
	}
	while (i > 0)
	{
		i --;
		ft_putchar (storage[i], count);
	}
}
