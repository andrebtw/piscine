/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 02:06:11 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/21 17:28:52 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

long	convert_to_dec(char *nbr, char *base_from, long sign);
long	ft_function(char *return_number, char *base, char *str);
long	int_length(long nbr);
void	ft_rev_int_tab(char *tab, long size, char minus);
char	*ft_convert_base(char *nbr, char *base_from, char *base_to);

long	check_if_in_base(char *base, char c)
{
	long	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_has_error(char *base, int j)
{
	char	check_chars[127];
	int		i;

	i = 0;
	if (base[i] == '\0' || base[i + 1] == '\0')
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-')
			return (1);
		check_chars[i] = base[i];
		j = 0;
		while (check_chars[j] != '\0')
		{
			if (j != i)
			{
				if (check_chars[j] == base[i])
					return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

/*
Long list :
variables[0] = base_length
variables[1] = counter
variables[2] = nbr_length
variables[3] = nb_convert_length
variables[4] = nb_copy
variables[5] = nb_convert_length_c
*/
void	convert_to_base2(long nbr, char *base_to,
	char *return_number, long *variables)
{
	while (base_to[variables[0]] != '\0')
		variables[0]++;
	if (nbr == 0)
		return ;
	if (nbr < 0)
	{
		return_number[0] = '-';
		variables[1]++;
		nbr = nbr * (-1);
	}
	variables[4] = nbr;
	while (nbr != 0)
	{
		nbr = nbr / variables[0];
		variables[3]++;
	}
	variables[5] = variables[3];
	variables[2] = int_length(nbr);
	while (variables[3] != 0)
	{
		return_number[variables[1]] = base_to[variables[4] % variables[0]];
		variables[1]++;
		variables[3]--;
		variables[4] = variables[4] / variables[0];
	}
}

char	*convert_to_base(long nbr, char *base_to, char *return_number)
{
	long	*variables;
	int		j;

	j = 0;
	if (ft_has_error(base_to, j) == 1)
		return (NULL);
	variables = (long *) malloc (555555);
	variables[0] = 0;
	variables[1] = 0;
	variables[3] = 0;
	variables[2] = int_length(nbr);
	convert_to_base2(nbr, base_to, return_number, variables);
	ft_rev_int_tab(return_number, variables[5], return_number[0]);
	return (return_number);
}
