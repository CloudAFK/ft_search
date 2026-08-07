/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dichotomous.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 18:14:12 by romasant          #+#    #+#             */
/*   Updated: 2026/08/07 12:14:19 by romasant         ###   ########.fr       */
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

void	ft_print_comparaison(int search, int val, char signe)
{
	ft_putnbr(search);
	ft_putchar(' ');
	ft_putchar(signe);
	ft_putchar(' ');
	ft_putnbr(val);
	ft_putchar('\n');
}

void	ft_maj_bornes(int search, int *tab, int *first, int *last)
{
	if (search > tab[(*first + *last) / 2])
	{
		ft_print_comparaison(search, tab[(*first + *last) / 2], '>');
		*first = (*first + *last) / 2 + 1;
	}
	else
	{
		ft_print_comparaison(search, tab[(*first + *last) / 2], '<');
		*last = (*first + *last) / 2 - 1;
	}
}

int	ft_dichotomous(int search, int *tab, int size)
{
	int (first) = 0;
	int (last) = size - 1;
	int (middle) = (first + last) / 2;
	int (find) = 0;

	while (!find && first <= last)
	{
		middle = (first + last) / 2;
		if (search == tab[middle])
		{
			ft_print_comparaison(search, tab[middle], '=');
			find = 1;
		}
		else
			ft_maj_bornes(search, tab, &first, &last);
	}
	ft_rep_dichotomous(search, middle, find);
	return (find);
}
