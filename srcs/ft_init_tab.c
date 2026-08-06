/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 18:56:47 by romasant          #+#    #+#             */
/*   Updated: 2026/08/06 23:50:31 by romasant         ###   ########.fr       */
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
		if (ft_isdigit(buff[i]))
			buff[i] = '\0';
		i++;
	}
	i = 0;
	read(0, buff, 10);
	*size = ft_atoi(buff);
	if (*size < 0)
		return (NULL);
	tab = malloc(sizeof(int) * (*size + 1));
	if (!tab)
		return (NULL);
	while (i < *size)
	{
		tab[i] = i;
		i++;
	}
	return (tab);
}
