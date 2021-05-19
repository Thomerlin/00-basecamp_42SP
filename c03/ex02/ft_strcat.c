/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 03:28:09 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/04/16 05:56:00 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	unsigned int	is;
	unsigned int	id;

	is = 0;
	id = 0;
	while (dest[id] != '\0')
		id++;
	while (src[is] != '\0')
	{
		dest[id + is] = src[is];
		is++;
	}
	dest[id + is] = '\0';
	return (dest);
}
