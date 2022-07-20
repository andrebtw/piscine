/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 21:45:55 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/16 22:32:43 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	if (min >= max)
		return (NULL);
	array = (int*)malloc(4 * (max - min));
	i = 0;
	while (min < max)
	{
		array[i] = min;
		printf("%d \n", array[i]);
		i++;
		min++;
	}
	return (array);
}
