/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/09 12:57:52 by efichot           #+#    #+#             */
/*   Updated: 2016/09/09 13:14:09 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_rot42(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'J'))
			str[i] = (str[i] + 16);
		else if ((str[i] >= 'K') && (str[i] <= 'Z'))
			str[i] = (str[i] - 10);
		else if ((str[i] >= 'a') && (str[i] <= 'j'))
			str[i] = (str[i] + 16);
		else if ((str[i] >= 'k') && (str[i] <= 'z'))
			str[i] = (str[i] - 10);
		i++;
	}
	return (str);
}