/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   filler.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 15:27:51 by jlaisne           #+#    #+#             */
/*   Updated: 2022/07/17 16:31:11 by jlaisne          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_axis.h"
#include "ft_place_cases.h"
#include <unistd.h>
#include "filler.h"
#include "link_filler.h"

int	filler_axis3(char **tab, char axis, char opposite)
{
	int	x;
	int	y;
	int	i;

	i = 0;
	if (opposite == 2)
	{
		x = find_x_y(axis, 3) / 10;
		y = find_x_y(axis, 3) % 10;
		if (tab[x][y] == 1)
		{
			x = find_x_y(axis, 0) / 10;
			y = find_x_y(axis, 0) % 10;
			i += can_place(tab, x, y, 2);
		}
		else
		{
			x = find_x_y(axis, 0) / 10;
			y = find_x_y(axis, 0) % 10;
			i += can_place(tab, x, y, 1);
		}
	}
	i += filler2_3(tab, axis, opposite);
	return (i);
}

int	filler_axis2(char **tab, char axis, char opposite)
{
	int	x;
	int	y;
	int	i;

	i = 0;
	if (opposite == 2)
	{
		x = find_x_y(axis, 1) / 10;
		y = find_x_y(axis, 1) % 10;
		if (tab[x][y] != 0)
		{
			x = find_x_y(axis, 2) / 10;
			y = find_x_y(axis, 2) % 10;
			i += place_in(tab, x, y, 4);
		}
		x = find_x_y(axis, 2) / 10;
		y = find_x_y(axis, 2) % 10;
		if (tab[x][y] != 0)
		{
			x = find_x_y(axis, 1) / 10;
			y = find_x_y(axis, 1) % 10;
			i += place_in(tab, x, y, 4);
		}
	}
	return (i += link_filler_axis2(tab, axis, opposite));
}

int	filler2_3(char **tab, char axis, char opposite)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	if (opposite == 2)
	{
		x = find_x_y(axis, 1) / 10;
		y = find_x_y(axis, 1) % 10;
		if (tab[x][y] == 2)
		{
			x = find_x_y(axis, 3) / 10;
			y = find_x_y(axis, 3) % 10;
			i += place_in(tab, x, y, 3);
		}
	}
	return (i);
}

int	filler2_2(char **tab, char axis, char opposite)
{
	int	x;
	int	y;
	int	i;

	i = 0;
	if (opposite == 2)
	{
		x = find_x_y(axis, 0) / 10;
		y = find_x_y(axis, 0) % 10;
		if (tab[x][y] == 2)
		{
			x = find_x_y(axis, 2) / 10;
			y = find_x_y(axis, 2) % 10;
			i += place_in(tab, x, y, 1);
		}
		x = find_x_y(axis, 2) / 10;
		y = find_x_y(axis, 2) % 10;
		if (tab[x][y] == 2)
		{
			x = find_x_y(axis, 0) / 10;
			y = find_x_y(axis, 0) % 10;
			i += place_in(tab, x, y, 1);
		}
	}
	return (i += filler3_2(tab, axis, opposite));
}

int	filler3_2(char **tab, char axis, char opposite)
{
	int	x;
	int	y;
	int	i;

	i = 0;
	if (opposite == 2)
	{
		x = find_x_y(axis, 3) / 10;
		y = find_x_y(axis, 3) % 10;
		if (tab[x][y] == 2)
		{
			x = find_x_y(axis, 2) / 10;
			y = find_x_y(axis, 2) % 10;
			i += place_in(tab, x, y, 1);
		}
		x = find_x_y(axis, 0) / 10;
		y = find_x_y(axis, 0) % 10;
		if (tab[x][y] == 1)
		{
			x = find_x_y(axis, 2) / 10;
			y = find_x_y(axis, 2) % 10;
			i += place_in(tab, x, y, 2);
		}
	}
	return (i);
}
