/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 09:07:46 by jlaisne           #+#    #+#             */
/*   Updated: 2022/07/17 08:04:13 by jlaisne          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"
#include <unistd.h>

int	ft_errorlength(char **argv, char *tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (argv[1][i])
	{
		if (argv[1][i] == ' ')
			i++;
		else
		{
			tab[j] = argv[1][i];
			j++;
			if (j >= 17)
				return (0);
			i++;
		}
	}
	if (j != 16)
		return (0);
	return (1);
}

int	return_error(void)
{
	write(1, "ERROR", 5);
	return (0);
}

int	ft_check_space(char **argv)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	if (argv[1][i] == ' ')
		return (0);
	while (argv[1][i])
	{
		if (argv[1][i] == ' ')
		{
			if (space == 1)
				return (0);
			else
				space = 1;
		}
		else
			space = 0;
		i++;
	}
	if (space == 1)
		return (0);
	return (1);
}

int	ft_check_str(char **argv)
{
	int	i;

	i = 0;
	while (argv[1][i])
	{
		if ((argv[1][i] < '1' || argv[1][i] > '4')
			&& argv[1][i] != ' ')
			return (0);
		i++;
	}
	return (1);
}
