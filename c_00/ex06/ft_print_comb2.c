/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/07 17:10:50 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/08 04:53:52 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	convert_to_char(int num1, int num2)
{
	int	char1;
	int	char2;
	int	char3;
	int	char4;

	char1 = num1 / 10;
	char2 = num1 % 10;
	char3 = num2 / 10;
	char4 = num2 % 10;
	ft_putchar(char1 + '0');
	ft_putchar(char2 + '0');
	ft_putchar(' ');
	ft_putchar(char3 + '0');
	ft_putchar(char4 + '0');
	if (!((num1 == 98) && (num2 == 99)))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = num1 + 1;
		while (num2 <= 99)
		{
			convert_to_char(num1, num2);
			num2++;
		}
		num1++;
	}
}
