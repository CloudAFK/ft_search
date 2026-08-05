/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 18:56:47 by romasant          #+#    #+#             */
/*   Updated: 2026/08/05 19:05:31 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_lib.h"

int	*ft_init_tab(void)
{
	char	buff[5];
	int		*tab;
	int		i;
	int		size;

	ft_putstr("Choisis la taille du tableau : ");
	read(0, buff, 5);
	size = ft_strlen(buff);
	tab = malloc(sizeof(int) * (ft_atoi(buff)+ 1));
	while (i < size)
	{
		tab[i] = i;
		
		i++;
	}
	return (tab);
}
