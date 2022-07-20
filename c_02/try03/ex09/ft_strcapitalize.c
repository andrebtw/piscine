/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 01:03:11 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/14 19:23:31 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	ft_charupcase(char str)
{
	if (str >= 'a' && str <= 'z')
	{
		str = str - 32;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	unsigned int	i;

	i = 0;
	str = ft_strlowcase(str);
	str[0] = ft_charupcase(str[0]);
	while (str[i] != '\0')
	{
		if ((str[i] >= 0 && str[i] <= 47)
			|| (str[i] >= 58 && str[i] <= 64)
			|| (str[i] >= 91 && str[i] <= 96)
			|| (str[i] >= 123 && str[i] <= 127))
		{
			if (str[i + 1] != '\0')
				str[i + 1] = ft_charupcase(str[i + 1]);
		}
		i++;
	}
	return (str);
}
