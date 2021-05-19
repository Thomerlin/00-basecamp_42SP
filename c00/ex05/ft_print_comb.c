/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 22:39:42 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/04/06 19:06:04 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char comb[3];

	comb[0] = '0';
	while (comb[0] <= '7')
	{
		comb[1] = comb[0] + 1;
		while (comb[1] <= '8')
		{
			comb[2] = comb[1] + 1;
			while (comb[2] <= '9')
			{
				ft_putchar(comb[0]);
				ft_putchar(comb[1]);
				ft_putchar(comb[2]);
				if (comb[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}
}
