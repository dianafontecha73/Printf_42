/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dfontech <dfontech@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/20 17:12:04 by dfontech          #+#    #+#             */
/*   Updated: 2024/02/28 19:12:15 by dfontech         ###   ########.fr       */
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

/*int main ()
{
	unsigned int num = 7000;
	int n = ft_puthex(num);
	printf("%d\n", n);
	printf("%x\n", num);
	return(0);
}*/
