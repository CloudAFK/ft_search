/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 18:56:47 by romasant          #+#    #+#             */
/*   Updated: 2026/08/05 20:29:38 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_lib.h"

int	*ft_init_tab(void)
{
	char	buff[1];
	int		*tab;
	int	(i) = 0;
	int	(size) = 0;

	ft_putstr("Choisis la taille du tableau : ");
	printf("%ld", read(0, buff, 1));
	printf("La size du tab :%d", size);
	tab = malloc(sizeof(int) * size);
	while (i < size)
	{
		tab[i] = i;
		ft_putnbr(tab[i]);
		i++;
	}
	return (tab);
}
