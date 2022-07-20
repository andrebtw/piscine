/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_filler.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:05:49 by jlaisne           #+#    #+#             */
/*   Updated: 2022/07/17 16:33:50 by jlaisne          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "filler.h"
#include "link_filler.h"
#include "ft_place_cases.h"
#include "ft_error.h"
#include <unistd.h>

int	link_filler_axis2(char **tab, char axis, char opposite)
{
	int	x;
	int	y;
	int	i;

	i = 0;
	if (opposite == 2)
	{
		x = find_x_y(axis, 1) / 10;
		y = find_x_y(axis, 1) % 10;
		if (tab[x][y] == 4)
			i += filler2_2(tab, axis, opposite);
		x = find_x_y(axis, 0) / 10;
		y = find_x_y(axis, 0) % 10;
		if (tab[x][y] == 3)
		{
			x = find_x_y(axis, 3) / 10;
			y = find_x_y(axis, 3) % 10;
			i += place_in(tab, x, y, 2);
		}
	}
	return (i);
}

int	ultimate_filler(char **tab)
{
	int	i;
	int	x;
	int	y;
	int	place;
	int	change;

	i = 0;
	change = 0;
	while (i < 16)
	{
		x = 0;
		y = 0;
		place = ultimate_filler2(tab, x, y, i);
		if (place != 0)
		{
			x = find_x_y(i, place / 10) / 10;
			y = find_x_y(i, place / 10) % 10;
			change += place_in(tab, x, y, place % 10);
		}
		i++;
	}
	return (change);
}

int	ultimate_filler2(char **tab, int x, int y, int i)
{
	int	j;
	int	memo;
	int	count;
	int	count2;

	j = 0;
	count = 0;
	count2 = 0;
	while (j < 4)
	{
		x = find_x_y(i, j) / 10;
		y = find_x_y(i, j) % 10;
		if (tab[x][y] == 0)
			memo = j * 10;
		else
		{
			count += tab[x][y];
			count2 += 1;
		}
		j++;
	}
	if (count2 == 3)
		return (memo + (10 - count));
	return (0);
}

int	filler_check(char **tab, char *axis, int i)
{
	int	j;
	int	maxbox;
	int	count;
	int	x;
	int	y;

	j = -1;
	count = 0;
	maxbox = 0;
	while (++j < 4)
	{
		x = find_x_y(i, j) / 10;
		y = find_x_y(i, j) % 10;
		if (tab[x][y] > maxbox)
		{
			maxbox = tab[x][y];
			count ++;
		}
	}
	if (count != axis[i])
	{
		i = return_error();
		return (1);
	}
	return (0);
}
