/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 22:30:11 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/18 15:32:36 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*verify(char *str, char *to_find, int str_pos)
{
	int	i;
	int	to_find_count;

	i = 0;
	to_find_count = 0;
	while (to_find[to_find_count] == '\0')
		to_find_count++;
	while (to_find[i] != '\0')
	{
		if (to_find[i] != str[str_pos + i])
			return ("\0");
		i++;
	}
	return (to_find);
}

// Returns found character in str, and all the next characters,
// For example : str = "This is the way." ; to_find = "the"
// The output will be : "the way."
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == 0)
		return (str);
	while (str[i] != '\0')
	{
		if (str[i] == to_find[0])
		{
			if (verify(str, to_find, i) == to_find)
			{
				while (str[i] != '\0')
				{
					to_find[j] = str[i];
					j++;
					i++;
				}
				return (to_find);
			}
		}
		i++;
	}
	return ("\0");
}

#include <string.h>
#include <stdio.h>

char    *ft_strstr(char *str, char *to_find);


int    main(void)
{
    char s1a[] = "This is OK for now";
    char s2a[] = "OK";
    char s1b[] = "This is OK for now";
    char s2b[] = "OK";
    char s3a[] = "Same";
    char s4a[] = "";
    char s3b[] = "Same";
    char s4b[] = "";
    char s5a[] = "Shorter";
    char s6a[] = "Than";
    char s5b[] = "Shorter";
    char s6b[] = "Than";

    printf("%s:%s\n", ft_strstr(s1a, s2a), strstr(s1b, s2b));
    printf("%s\n", strcmp(s1a, s1b) == 0 && strcmp(s2a, s2b) == 0 ? "Success" : "Fail");
    printf("%s:%s\n", ft_strstr(s3a, s4a), strstr(s3b, s4b));
    printf("%s\n", strcmp(s3a, s3b) == 0 && strcmp(s4a, s4b) == 0 ? "Success" : "Fail");
    printf("%s:%s\n", ft_strstr(s5a, s6a), strstr(s5b, s6b));
    printf("%s\n", strcmp(s5a, s5b) == 0 && strcmp(s6a, s6b) == 0 ? "Success" : "Fail");
}