/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 12:42:33 by qgros             #+#    #+#             */
/*   Updated: 2022/07/10 18:14:03 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	a(int x)
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

void	b(int x)
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

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		a(x);
		while (y > 2)
		{
			b(x);
			y--;
		}
		if (y != 1)
		{
			a(x);
		}
	}
}
