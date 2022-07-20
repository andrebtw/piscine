/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 06:24:26 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/20 14:27:41 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_has_error_2(char *base, int i, int j)
{
	char	check_chars[127];
	
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

int	ft_has_error(char *base)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (ft_has_error_2(base, i, j) == 1)
		return(1);
	return (0);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	base_length;
	int	counter;
	char printing_number[127];
	int	negative;

	base_length = 0;
	counter = 0;
	negative = 0;
	if (ft_has_error(base))
		return ;
	while (base[base_length] != '\0')
		base_length++;
	if (nbr == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = nbr * (-1);
	}
	ft_putnbr_base(nbr / base_length, base);
	printing_number[counter] = base[nbr % base_length];
	write(1, &printing_number[counter], 1);
	counter++;
}
