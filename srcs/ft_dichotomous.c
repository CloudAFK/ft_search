/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dichotomous.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 18:14:12 by romasant          #+#    #+#             */
/*   Updated: 2026/08/07 00:46:58 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_lib.h"

void	ft_rep_dichotomous(int search, int middle, int find)
{
	if (find == 1)
	{
		ft_putstr("La valeur ");
		ft_putnbr(search);
		ft_putstr(" est au rang : ");
		ft_putnbr(middle);
		ft_putchar('\n');
	}
	else
		ft_putstr("Nombre introuvable.\n");
}

int	ft_dichotomous(int search, int *tab, int size)
{
	int (first) = 0;
	int (last) = size - 1;
	int (middle) = (first + last) / 2;
	int (find) = 0;
	while (!find && first <= last)
	{
		if (search == tab[middle])
		{
			find = 1;
			break ;
		}
		else if (search > tab[middle])
		{
			first = middle + 1;
			middle = (first + last) / 2;
		}
		else
		{
			last = middle - 1;
			middle = (first + last) / 2;
		}
	}
	ft_rep_dichotomous(search, middle, find);
	return (find);
}
