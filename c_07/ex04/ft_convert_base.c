/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 04:06:34 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/21 17:28:39 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char	*convert_to_base(long nbr, char *base_to, char *return_number);
long	check_if_in_base(char *base, char c);

/*
variables[0] = base_length
variables[1] = nbr_length
variables[2] = number
variables[3] = i
variables[4] = j
*/
long	convert_to_dec(char *nbr, char *base_from, long sign)
{
	long	*variables;

	variables = (long *) malloc (555555);
	variables[0] = 0;
	variables[1] = 0;
	variables[2] = 0;
	while (base_from[variables[0]] != '\0')
		variables[0]++;
	while (nbr[variables[1]] != '\0')
		variables[1]++;
	variables[4] = 0;
	while (variables[4] < variables[1])
	{
		variables[3] = 0;
		while (nbr[variables[4]] != base_from[variables[3]])
			variables[3]++;
		variables[2] = variables[2] * variables[0] + variables[3];
		variables[4]++;
	}
	if (sign % 2 == 1)
		variables[2] = variables[2] * (-1);
	return (variables[2]);
}

/*
variables[0] = k
variables[1] = i
variables[2] = sign
*/
long	ft_function(char *return_number, char *base, char *str)
{
	long	*variables;

	variables = (long *) malloc (55555);
	variables[0] = 0;
	variables[1] = 0;
	variables[2] = 0;
	while (str[variables[1]] == ' '
		|| (str[variables[1]] >= 9 && str[variables[1]] <= 13))
		variables[1]++;
	while (str[variables[1]] != '\0')
	{
		if (str[variables[1]] == '-')
			variables[2]++;
		while (check_if_in_base(base, str[variables[1] + variables[0]]) == 1)
		{
			return_number[variables[0]] = str[variables[1] + variables[0]];
			variables[0]++;
		}
		if (variables[0] != 0)
			return (convert_to_dec(return_number, base, variables[2]));
		if (str[variables[1]] != '+' && str[variables[1]] != '-')
			return (0);
		variables[1]++;
	}
	return (0);
}

long	int_length(long nbr)
{
	long	nbr_length;

	nbr_length = 0;
	while (nbr != 0)
	{
		nbr = nbr / 10;
		nbr_length++;
	}
	return (nbr_length);
}

void	ft_rev_int_tab(char *tab, long size, char minus)
{
	long	i;
	long	temp;
	long	size_b;

	if (minus == '-')
		size++;
	size_b = size - 1;
	i = 0;
	while (i < size / 2)
	{
		if (tab[i] != '-')
		{
			temp = tab[i];
			tab[i] = tab[size_b];
			tab[size_b] = temp;
			size_b--;
		}
		i++;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	number;
	char	*number_return;
	char	*number_returning;

	number_return = (char *) malloc (555555555);
	number_returning = (char *) malloc (555555);
	number = ft_function(number_return, base_from, nbr);
	number_returning = convert_to_base(number, base_to, number_returning);
	return (number_returning);
}
