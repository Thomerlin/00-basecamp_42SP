/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 04:08:21 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/04/16 04:27:28 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int is;
	unsigned int id;

	is = 0;
	id = 0;
	while (dest[id] != '\0')
		id++;
	while (src[is] != '\0' && is < nb)
	{
		dest[id + is] = src[is];
		is++;
	}
	dest[id + is] = '\0';
	return (dest);
}
