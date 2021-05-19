/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/06 17:22:18 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/04/06 19:09:34 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	char comb[2];

	comb[0] = 0;
	comb[1] = 0;
	while (comb[0] <= 99)
	{
		comb[1] = comb[0] + 1;
		while (comb[1] <= 99)
		{
			ft_putchar(comb[0] / 10 + '0');
			ft_putchar(comb[0] % 10 + '0');
			ft_putchar(' ');
			ft_putchar(comb[1] / 10 + '0');
			ft_putchar(comb[1] % 10 + '0');
			if ((comb[0] / 10 != 9) || (comb[0] % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			comb[1]++;
		}
		comb[0]++;
	}
}
