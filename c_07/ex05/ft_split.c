/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 18:41:47 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/22 01:18:50 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int check_charset(char c, char *charset)
{
    int i;

    i = 0;
    while (charset[i] != '\0')
    {
        if (charset[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char	**end_character(char **string, int j)
{
	string[j + 1] = "0";
	return (string);
}

char	**ft_split(char *str, char *charset)
{
    char    **string;
    int     i;
    int     j;
	int		k;

    i = 0;
    j = 0;
    string = (char **) malloc (99999);
	string[0] = (char *) malloc (99999);
    while (str[i] != '\0')
    {
		while (check_charset(str[i], charset) == 1)
		{
			k = 0;
			i++;
			if (string[j][0] != '\0')
			{
            	j++;
				string[j] = (char *) malloc (99999);
			}
		}
        string[j][k] = str[i];
		i++;
		k++;
    }
	return (end_character(string, j));
}
