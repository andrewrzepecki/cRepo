/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrzepec <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 23:51:48 by anrzepec          #+#    #+#             */
/*   Updated: 2018/08/07 00:10:39 by anrzepec         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	int c;

	c = 0;
	while (str[c])
	{
		if ((str[c] < 'A' || str[c] > 'Z') && (str[c] < 'a' || str[c] > 'z'))
			return (0);
		c++;
	}
	return (1);
}