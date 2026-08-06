/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 18:56:47 by romasant          #+#    #+#             */
/*   Updated: 2026/08/06 23:36:10 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_lib.h"

int	*ft_init_tab(int *size)
{
	char	buff[10];
	int		*tab;

	int (i) = 0;
	ft_putstr("Choisis la taille du tableau : ");
	while (i < 10)
	{
		buff[i] = '\0';
		i++;
	}
	i = 0;
	read(0, buff, 10);
	*size = ft_atoi(buff);
	tab = malloc(sizeof(int) * (*size + 1));
	if (!tab)
		return (NULL);
	while (i < *size)
	{
		tab[i] = i;
		ft_putnbr(tab[i]);
		if (tab[i] != *size)
		ft_putstr(", ");
		i++;
	}
	ft_putchar('\n');
	return (tab);
}
