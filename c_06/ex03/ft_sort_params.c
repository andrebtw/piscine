/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 01:53:39 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/16 02:56:42 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_count_str(char *string)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
		i++;
	return (i);
}

void	ft_sort_string(char *string)
{
	int	i;
	int	temp;
	int	size_b;
	int	size;

	i = 0;
	size = ft_count_str(string);
	size_b = 0;
	while (string[i] != '\0')
	{
		while (size_b < size)
		{
			if (string[i] < string[size_b])
			{
				temp = string[i];
				string[i] = string[size_b];
				string[size_b] = temp;
			}
			size_b++;
		}
		i++;
		size_b = 0;
	}
	ft_putstr(string);
}

int	main(int args, char **argv)
{
    int i;

    i = 1;
    while (i < args)
	{
    	ft_sort_string(argv[i]);
		write(1, "\n", 1);
		i++;
	}
    return (0);
}
