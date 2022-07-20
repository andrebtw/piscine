/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aveau <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:45:50 by aveau             #+#    #+#             */
/*   Updated: 2022/07/17 13:27:05 by aveau            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "free.h"
#include <stdlib.h>

void	free_all(char **tab, char *axis)
{
	free_tab(tab);
	free_axis(axis);
}

void	free_tab(char **tab)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	free_axis(char *axis)
{
	free(axis);
}
