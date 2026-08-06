/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 18:56:47 by romasant          #+#    #+#             */
/*   Updated: 2026/08/07 00:56:14 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_lib.h"

int	ft_check_input(char *buff)
{
	int (i) = 0;
	int (flag) = 0;
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

void	ft_buff_empty(char *buff)
{
	int (i) = 0;
	while (i < 10)
	{
		buff[i] = '\0';
		i++;
	}
}

void	ft_tab_empty(int *tab, int *size)
{
	int (i) = 0;
	while (i < *size)
	{
		tab[i] = i;
		i++;
	}
}

int	*ft_init_tab(int *size)
{
	char	buff[10];
	int		*tab;

	int (check) = 0;
	ft_putstr("Choisis la taille du tableau : ");
	ft_buff_empty(buff);
	read(0, buff, 9);
	check = ft_check_input(buff);
	if (check == 0)
		return (NULL);
	else
	{
		ft_check_input(buff);
		*size = ft_atoi(buff);
		if (*size <= 0 || *size > 10000)
			return (NULL);
		tab = malloc(sizeof(int) * (*size + 1));
		if (!tab)
			return (NULL);
		ft_tab_empty(tab, size);
	}
	return (tab);
}
