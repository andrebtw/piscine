/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:24:44 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/27 15:49:50 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	change_base_to_dec(char *nbr, char *base)
{
	int	base_length;
	int	nbr_length;
	int	number;
	int	i;
	int	j;

	base_length = 0;
	nbr_length = 0;
	number = 0;
	while (base[base_length] != '\0')
		base_length++;
	while (nbr[nbr_length] != '\0')
		nbr_length++;
	j = 0;
	while (j < nbr_length)
	{
		i = 0;
		while (nbr[j] != base[i])
			i++;
		number = number * base_length + i;
		j++;
	}
	return (number);
}

int	check_if_in_base(char *base, char c)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	ft_function(char *return_number, char *base, char *str)
{
	int	k;
	int	i;
	int	sign;
	int	num;

	k = 0;
	i = 0;
	num = 0;
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
		i++;
	}
	return (change_base_to_dec(return_number, base));
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

int	ft_atoi_base(char *str, char *base)
{
	int		sign;
	int		number;
	char	return_number[127];
	char	check_chars[127];
	int		j;

	j = 0;
	sign = 0;
	if (ft_has_error(base, j) == 1)
		return (0);
	number = ft_function(return_number, base, str);
	return (number);
}
