/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:44:51 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/17 17:50:28 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr2(int num)
{
	int	reste;

	if (num == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (num < 0)
	{
		write(1, "-", 1);
		num = -num;
	}
	if (num == 0)
	{
		return ;
	}
	ft_putnbr2(num / 10);
	reste = (num % 10) + '0';
	write(1, &reste, 1);
}

void	ft_putnbr(int num)
{
	if (num == 0)
	{
		num = num + '0';
		write(1, &num, 1);
	}
	else
		ft_putnbr2(num);
}
