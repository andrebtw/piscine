/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 01:08:38 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/17 03:19:28 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strjoin2(int size, char **strs, char *sep, char *string)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			string[k] = strs[i][j];
			k++;
			j++;
		}
		j = 0;
		while (sep[j] != '\0')
		{
			string[k] = sep[j];
			k++;
			j++;
		}
		i++;
	}
	return (string);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*string;
	int		string_size;
	int		sep_size;
	int		counter;

	string = (char *) malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	string = ft_strjoin2(size, strs, sep, string);
	string_size = 0;
	sep_size = 0;
	counter = 0;
	while (string[string_size] != '\0')
		string_size++;
	while (sep[sep_size] != '\0')
		sep_size++;
	while (sep_size >= 0)
	{
		string[string_size - counter] = '\0';
		counter++;
		sep_size--;
	}
	return (string);
}
