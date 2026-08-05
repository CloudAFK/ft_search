/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 18:56:47 by romasant          #+#    #+#             */
/*   Updated: 2026/08/05 19:54:58 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_lib.h"

int	*ft_init_tab(void)
{
	char	buff[5];
	int		*tab;
	int		i = 0;
	int		size;

	ft_putstr("Choisis la taille du tableau : ");
	read(0, buff, 4);
	size = ft_strlen(buff);
	printf("La size du tab :%d", size);
	tab = malloc(sizeof(int) * (ft_atoi(buff)+ 1));
	ft_putnbr(size);
	while (i < size)
	{
		tab[i] = i;
		ft_putnbr(tab[i]);
		i++;
	}
	return (tab);
}
