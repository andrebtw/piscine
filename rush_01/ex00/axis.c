/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   axis.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 13:24:04 by jlaisne           #+#    #+#             */
/*   Updated: 2022/07/17 16:35:37 by jlaisne          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_axis.h"
#include "ft_place_cases.h"
#include "filler.h"
#include "ft_tab.h"

char	find_opposite(char *axis, char i_axis)
{
	if (i_axis / 8 == 1)
	{
		i_axis = i_axis - 8;
		if (i_axis / 4 == 1)
			return (axis[i_axis + 4]);
		else
			return (axis[i_axis + 12]);
	}
	else
	{
		if (i_axis / 4 == 1)
			return (axis[i_axis - 4]);
		else
			return (axis[i_axis + 4]);
	}
}

char	axis1(char **tab, char i_axis)
{
	int	i;
	int	x;
	int	y;

	x = find_x_y(i_axis, 0) / 10;
	y = find_x_y(i_axis, 0) % 10;
	i = place_in(tab, x, y, 4);
	return (i);
}

char	axis4(char **tab, char i_axis)
{
	int	i;
	int	x;
	int	y;
	int	depth;

	depth = 0;
	i = 0;
	while (depth != 4)
	{
		x = find_x_y(i_axis, depth) / 10;
		y = find_x_y(i_axis, depth) % 10;
		i += place_in(tab, x, y, depth + 1);
		depth++;
	}
	return (i);
}

char	axis3(char **tab, char *axis, char i_axis)
{
	int	i;
	int	x;
	int	y;
	int	opposite;

	i = 0;
	opposite = find_opposite(axis, i_axis);
	if (opposite == 1)
	{
		x = find_x_y(i_axis, 1) / 10;
		y = find_x_y(i_axis, 1) % 10;
		i += place_in(tab, x, y, 3);
		i += filler_axis3(tab, i_axis, opposite);
	}
	else if (opposite == 2)
	{
		x = find_x_y(i_axis, 2) / 10;
		y = find_x_y(i_axis, 2) % 10;
		i += place_in(tab, x, y, 4);
		i += filler_axis3(tab, i_axis, opposite);
	}
	return (i);
}

char	axis2(char **tab, char *axis, char i_axis)
{
	int	i;
	int	x;
	int	y;
	int	opposite;

	i = 0;
	opposite = find_opposite(axis, i_axis);
	if (opposite == 1)
	{
		x = find_x_y(i_axis, 0) / 10;
		y = find_x_y(i_axis, 0) % 10;
		i += place_in(tab, x, y, 3);
	}
	i += filler_axis2(tab, i_axis, opposite);
	return (i);
}
