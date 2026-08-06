/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lib.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: romasant <romasant@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/08/05 18:08:22 by romasant          #+#    #+#             */
/*   Updated: 2026/08/06 18:54:58 by romasant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIB_H
# define FT_LIB_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_putstr(char *str);
int		*ft_init_tab(int *size);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
void	ft_putnbr(int nb);
void	ft_putchar(char c);
int		ft_dichotomous(int search, int *tab, int size);

#endif
