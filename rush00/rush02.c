/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/03 13:48:03 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/04/03 16:37:22 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	width;
	int	heigth;

	heigth = 1;
	while (heigth <= y)
	{
		width = 1;
		while (width <= x)
		{
			if ((heigth == 1 && width == 1) || (heigth == 1 && width == x))
				ft_putchar('A');
			else if ((heigth == y && width == 1) || (heigth == y && width == x))
				ft_putchar('C');
			else if ((heigth == 1) || (heigth == y))
				ft_putchar('B');
			else if (width == 1 || width == x)
				ft_putchar('B');
			else
				ft_putchar(' ');
			width++;
		}
		ft_putchar('\n');
		heigth++;
	}
}
