/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dichotomous.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/06 18:14:12 by romasant          #+#    #+#             */
/*   Updated: 2026/08/06 19:54:51 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_lib.h"

int	ft_dichotomous(int search, int *tab, int size)
{
	int (first) = tab[0];
	int (last) = tab[size];
	int (middle) = (tab[0] + tab[size]) / 2;
	int (find) = 0;


	if (!tab || !tab[1])
		return (-1);
	while (!find && first <= last)
	{
		if (search == middle)
			find = 1;
		else if (search > middle)
			first = middle + 1;
		else
		{
			last = middle + 1;
			middle = (first + last) / 2;
		}
	}
	if (find == 1)
	{
		ft_putstr("La valeur ");
		ft_putnbr(search);
		ft_putstr(" est au rang : ");
		ft_putnbr(middle);
		ft_putchar('\n');
	}
	else
		ft_putstr("La valeur n'a pas etait trouvee\n");
	return (find);
}
