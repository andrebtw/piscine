/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:44:40 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/10 18:16:15 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	a_begin_2(int x)
{
	ft_putchar('A');
	x = x - 2;
	while (x > 0)
	{
		ft_putchar('B');
		x--;
	}
	if (x == 0)
	{
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	b_middle_2(int x)
{
	if (x == 1)
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
	x = x -2;
	if (x >= 0)
	{
		ft_putchar('B');
	}
	while (x > 0)
	{
		ft_putchar(' ');
		x--;
	}
	if (x == 0)
	{
		ft_putchar('B');
		ft_putchar('\n');
	}
}

void	c_end_2(int x)
{
	ft_putchar('C');
	x = x - 2;
	while (x > 0)
	{
		ft_putchar('B');
		x--;
	}
	if (x == 0)
	{
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	rush04(int x, int y)
{
	if (x > 0 && y > 0)
	{
		a_begin_2(x);
		while (y > 2)
		{
			b_middle_2(x);
			y--;
		}
		if (y != 1)
		{
			c_end_2(x);
		}
	}
}
