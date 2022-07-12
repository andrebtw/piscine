/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 00:17:15 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/07 20:37:13 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	check_end(int num3, int num2, int num1)
{
	char	last_number[3];
	char	number[3];

	last_number[0] = '7';
	number[0] = num1 + '0';
	if (last_number[0] == number[0])
	{
		ft_putchar(num1 + '0');
		ft_putchar(num2 + '0');
		ft_putchar(num3 + '0');
	}
	else
	{
		ft_putchar(num1 + '0');
		ft_putchar(num2 + '0');
		ft_putchar(num3 + '0');
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	check_if_equal(int num3, int num2, int num1)
{
	if (num1 != num2 && num2 != num3 && num1 != num3)
	{
		check_end(num3, num2, num1);
	}
}

void	ft_print_comb(void)
{
	int	num_1;
	int	num_2;
	int	num_3;

	num_1 = 0;
	num_2 = 1;
	num_3 = 2;
	while (num_1 <= 7)
	{
		while (num_2 <= 8)
		{
			while (num_3 <= 9)
			{
				check_if_equal(num_3, num_2, num_1);
				num_3++;
			}
			num_3 = (num_3 - num_3) + num_2 + 1;
			num_2++;
			check_if_equal(num_3, num_2, num_1);
		}
		check_if_equal(num_3, num_2, num_1);
		num_2 = (num_2 - num_2) + num_1 + 1;
		num_1++;
	}
}
