/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 05:04:21 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/12 05:31:42 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i_s1;
	int	i_s2;

	i_s1 = 0;
	i_s2 = 0;
	while (s1[i] != '\0')
	{
		i_s1++;
	}
	while (s2[i] != '\0')
	{
		i_s2++;
	}
	if (i_s1 < i_s2)
	{
		return (i_s1 - i_s2);
	}
	else if (i_s1 > i_s2)
	{
		return (i_s1 - i_s2);
	}
	return (0);
}
