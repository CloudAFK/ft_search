/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 18:56:47 by romasant          #+#    #+#             */
/*   Updated: 2026/08/06 18:02:05 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_lib.h"

void	ft_init_tab(void)
{
	char	buff[100];
	int		*tab;
	int	(i) = 0;
	int	(size) = 0;

	ft_putstr("Choisis la taille du tableau : ");
	read(0, buff, 100);
	size = ft_atoi(buff);
	tab = malloc(sizeof(int) * size);
	while (i < size)
	{
		tab[i] = i;
		ft_putnbr(tab[i]);
		if (tab[i] != size - 1)
			ft_putstr(", ");
		i++;
	}
}
