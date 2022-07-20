/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:43:04 by jlaisne           #+#    #+#             */
/*   Updated: 2022/07/17 16:07:18 by jlaisne          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "pre_check.h"
#include "ft_place_cases.h"
#include "ft_tab.h"
#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	last_check(char **tab, char *axis)
{
	int	x;
	int	y;

	x = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			if (tab[x][y] == 0)
			{
				pre_fill(tab, axis, x);
				return ;
			}
			y++;
		}
		x++;
	}
	check(axis, tab);
}

void	pre_fill(char **tab, char *axis, int x)
{
	int	y;
	int	memo;
	int	ope;
	int	change;

	change = 0;
	y = -1;
	memo = 0;
	ope = 1000;
	while (++y < 5)
	{
		memo += tab[x][y] * ope;
		ope = ope / 10;
	}
	final_fill(tab, axis, x, memo);
	return ;
}

char	find_fill(int memo, int j)
{
	int		i;
	int		ope;
	char	result[4];
	int		depth;

	i = -1;
	ope = 1000;
	while (++i < 4)
	{
		if (memo / ope == 0)
			depth = i;
		result[i] = memo / ope;
		memo = memo % ope;
		ope = ope / 10;
	}
	i = 0;
	while (++j < 5)
	{
		while (j != result[i])
			i++;
		if (i != 4)
			return (depth * 10 + j);
	}
	return (depth * 10 + j);
}	

void	final_fill(char **tab, char *axis, int x, int memo)
{
	int	y;
	int	i;
	int	i_axis;

	i_axis = 0;
	i = 0;
	memo = find_fill(memo, i_axis);
	i_axis = x;
	x = find_x_y(i_axis, memo / 10) / 10;
	y = find_x_y(i_axis, memo / 10) % 10;
	i += place_in(tab, x, y, memo % 10);
	loop(axis, tab);
}
