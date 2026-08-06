/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 17:45:05 by romasant          #+#    #+#             */
/*   Updated: 2026/08/07 00:32:53 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_lib.h"

//on part du principe que le tab est trie

int	main(void)
{
	int		*tab;
	char	buff_nb[10];

	int (size) = 0;
	int (index) = 0;
	int (search) = 0;
	tab = ft_init_tab(&size);
	if (tab == NULL)
	{
		ft_putstr("Erreur\n");
		return (0);
	}
	ft_putstr("Tape le nombre que tu veux chercher : ");
	while (index < 10)
	{
		buff_nb[index] = '\0';
		index++;
	}
	index = 0;
	read(0, buff_nb, 9);
	search = ft_atoi(buff_nb);
	index = ft_dichotomous(search, tab, size);
	 if (index == -1)
	{
		ft_putstr("Erreur : Ton tableau est vide !\n");
		return (0);
	}
	free(tab);
	return (0);
}
