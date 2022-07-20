/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_cases.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 08:12:24 by jlaisne           #+#    #+#             */
/*   Updated: 2022/07/17 15:59:10 by jlaisne          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   place_cases.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:10:25 by jlaisne           #+#    #+#             */
/*   Updated: 2022/07/17 08:10:26 by jlaisne          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_place_cases.h"
#include "ft_tab.h"

char	place_in(char **tab, int x, int y, int nbr)
{
	if (can_place(tab, x, y, nbr))
	{
		tab[x][y] = nbr;
		return (1);
	}
	else
		return (0);
}

char	can_place(char **tab, int x, int y, int nbr)
{
	int	i;
	int	j;

	i = 0;
	j = -1;
	if (tab[x][y] != 0)
		return (0);
	while (++j < 4)
	{
		if (tab[x][j] != nbr)
			i++;
	}
	if (i != 4)
		return (0);
	i = 0;
	j = -1;
	while (++j < 4)
	{
		if (tab[j][y] != nbr)
			i++;
	}
	if (i != 4)
		return (0);
	return (1);
}

char	find_x_y(char axis, char depth)
{
	int	x;
	int	y;

	if (axis / 8 == 1)
	{
		y = axis % 4;
		if (axis / 4 == 2)
			x = depth;
		else
			x = 3 - depth;
	}
	else
	{
		x = axis % 4;
		if (axis / 4 == 0)
			y = depth;
		else
			y = 3 - depth;
	}
	return (x * 10 + y);
}
