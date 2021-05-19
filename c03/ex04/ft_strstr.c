/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tyago-ri <tyago-ri@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/16 04:45:30 by tyago-ri          #+#    #+#             */
/*   Updated: 2021/04/16 06:11:53 by tyago-ri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	is;
	unsigned int	it;

	is = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[is] != '\0')
	{
		it = 0;
		while (str[is + it] == to_find[it])
		{
			if (to_find[it + 1] == '\0')
				return (&str[is]);
			it++;
		}
		is++;
	}
	return (0);
}
