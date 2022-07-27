/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 23:23:41 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/25 15:35:40 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int		ft_srtlen(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
		i++;
	return (i);
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*return_value;
	int			j;

	return_value = (t_stock_str *) malloc (sizeof(t_stock_str) * 50);
	if (return_value == (void *) NULL)
		return NULL;
	j = 0;
	while (ac > 0)
	{
		return_value[j].size = ft_srtlen(av[j]);
		return_value[j].str = av[j];
		return_value[j].copy = av[j];
		ac--;
		j++;
	}
	return_value[j].str = "0";
	return (return_value);
}
