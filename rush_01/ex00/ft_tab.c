/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:04:25 by jlaisne           #+#    #+#             */
/*   Updated: 2022/07/17 16:45:50 by anrodri2         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "pre_check.h"
#include "ft_tab.h"
#include "ft_place_cases.h"
#include "ft_axis.h"
#include "ft_error.h"
#include "link_filler.h"
#include "free.h"
#include "filler.h"
#include <stdlib.h>
#include <unistd.h>

void	create_axis(char **argv)
{
	int		i;
	int		j;
	char	*axis;
	char	**tab;

	i = 0;
	j = 0;
	axis = malloc(sizeof(char) * 16);
	while (argv[1][i])
	{
		if (argv[1][i] == ' ')
			i++;
		else
		{
			axis[j] = argv[1][i] - 48;
			i++;
			j++;
		}
	}
	tab = create_tab();
	loop(axis, tab);
}

char	**create_tab(void)
{
	int		i;
	int		j;
	char	**tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(*tab) * 4);
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tab[i] = malloc(sizeof(**tab) * 4);
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (tab);
}

void	loop(char *axis, char **tab)
{
	int	i;
	int	change;

	change = 1;
	while (change != 0)
	{
		change = 0;
		i = 0;
		while (i < 16)
		{
			if (axis[i] == 1)
				change += axis1(tab, i);
			if (axis[i] == 4)
				change += axis4(tab, i);
			if (axis[i] == 2)
				change += axis2(tab, axis, i);
			else
				change += axis3(tab, axis, i);
			i++;
		}
		change += ultimate_filler(tab);
	}
	last_check(tab, axis);
}

void	check(char *axis, char **tab)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (filler_check(tab, axis, i))
			return ;
		i++;
	}
	display(tab, axis);
}

void	display(char **tab, char *axis)
{
	int		x;
	int		y;
	char	print;

	x = 0;
	y = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			print = tab[y][x] + 48;
			write(1, &print, 1);
			if (y != 3)
				write(1, " ", 1);
			y++;
		}
		write(1, "\n", 1);
		x++;
	}
	free_all(tab, axis);
}
