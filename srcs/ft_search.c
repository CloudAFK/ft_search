/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_search.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 17:45:05 by romasant          #+#    #+#             */
/*   Updated: 2026/08/07 01:30:10 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_lib.h"

//on part du principe que le tab est trie

int	main(void)
{
	int		*tab;
	char	buff_nb[10];

	int (size) = 0;
	int (search) = 0;
	int (check) = 0;
	tab = ft_init_tab(&size);
	if (tab == NULL)
		return (0);
	ft_putstr("Tape le nombre que tu veux chercher : ");
	ft_buff_empty(buff_nb);
	read(0, buff_nb, 9);
	check = ft_check_input(buff_nb);
	if (check == 0)
	{
		free(tab);
		return (0);
	}
	search = ft_atoi(buff_nb);
	ft_dichotomous(search, tab, size);
	free(tab);
	return (0);
}
