/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efichot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/01 16:40:07 by efichot           #+#    #+#             */
/*   Updated: 2016/09/01 16:43:11 by efichot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb);

int		ft_strlen(char *str);

int		main(void)
{
	ft_putnbr(ft_strlen("Compte moi connard!"));
	return (0);
}