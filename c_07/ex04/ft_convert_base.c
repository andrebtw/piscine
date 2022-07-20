/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 04:06:34 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/20 22:23:19 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

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

long	convert_to_dec(char *nbr, char *base_from, long sign)
{
	long	base_length;
	long	nbr_length;
	long	number;
	long	i;
	long	j;

	base_length = 0;
	nbr_length = 0;
	number = 0;
	while (base_from[base_length] != '\0')
		base_length++;
	while (nbr[nbr_length] != '\0')
		nbr_length++;
	j = 0;
	while (j < nbr_length)
	{
		i = 0;
		while (nbr[j] != base_from[i])
			i++;
		number = number * base_length + i;
		j++;
	}
	if (sign % 2 == 1)
		number = number * (-1);
	return (number);
}

long	ft_function(char *return_number, char *base, char *str)
{
	long	k;
	long	i;
	long	sign;

	k = 0;
	i = 0;
	sign = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			sign++;
		while (check_if_in_base(base, str[i + k]) == 1)
		{
			return_number[k] = str[i + k];
			k++;
		}
		if (k != 0)
		{
			return (convert_to_dec(return_number, base, sign));
		}
		if (str[i] != '+' && str[i] != '-')
			return (0);
		i++;
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

char	*convert_to_base(long nbr, char *base_to, char *return_number)
{
	long	base_length;
	long	counter;
	long	nbr_length;
	long	nb_convert_length;
	long	nb_copy;
	long	nb_convert_length_c;

	base_length = 0;
	counter = 0;
	nb_convert_length = 0;
	while (base_to[base_length] != '\0')
		base_length++;
	nbr_length = int_length(nbr);
	if (nbr == 0)
		return ("0");
	if (nbr < 0)
	{
		return_number[0] = '-';
		counter++;
		nbr = nbr * (-1);
	}
	nb_copy = nbr;
	while (nbr != 0)
	{
		nbr = nbr / base_length;
		nb_convert_length++;
	}
	nb_convert_length_c = nb_convert_length;
	nbr_length = int_length(nbr);
	while (nb_convert_length != 0)
	{
		return_number[counter] = base_to[nb_copy % base_length];
		counter++;
		nb_convert_length--;
		nb_copy = nb_copy / base_length;
	}
	ft_rev_int_tab(return_number, nb_convert_length_c, return_number[0]);
	return (return_number);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	number;
	char *number_return;
	char *number_returning;

	number_return = (char *) malloc (555555555);
	number_returning = (char *) malloc (555555);
	number = ft_function(number_return, base_from, nbr);
	number_returning = convert_to_base(number, base_to, number_returning);
	return (number_returning);
}

int	main(void)
{
	char str[100] = "-8948489489489489";
	char base[100] = "0123456789";
	char base_to[100] = "0123456789";
	char	*test;

	printf("%s",ft_convert_base(str, base, base_to));
	return(0);
}
