/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 18:56:47 by romasant          #+#    #+#             */
/*   Updated: 2026/08/07 00:20:41 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_lib.h"

int	ft_check_input(char *buff)
{
	int (i) = 0;
	int	(flag) = 0;

	if (buff[0])
	while (buff[i])
	{
		if (buff[0] == '\n')
			flag = 1;
		if (buff[i] != '\0' && buff[i] != '\n')
		{
			if (!ft_isdigit(buff[i]))
				flag = 1;
		}
		i++;
	}
	if (flag == 1)
		return (0);
	else
		return (1);
}

int	*ft_init_tab(int *size)
{
	char	buff[10];
	int		*tab;

	int (i) = 0;
	int (check) = 0;
	ft_putstr("Choisis la taille du tableau : ");
	while (i < 10)
	{
		buff[i] = '\0';
		i++;
	}
	read(0, buff, 10);
	check = ft_check_input(buff);
	if (check == 0)
		return (NULL);
	else
	{
		i = 0;
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
	}
	return (tab);
}
