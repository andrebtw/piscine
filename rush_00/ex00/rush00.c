/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:20:07 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/10 18:13:32 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	o(int x)
{
	ft_putchar('o');
	x = x - 2;
	while (x > 0)
	{
		ft_putchar('-');
		x--;
	}
	if (x == 0)
	{
		ft_putchar('o');
	}
	ft_putchar('\n');
}

void	middle(int x)
{
	if (x == 1)
	{
		ft_putchar('|');
		ft_putchar('\n');
	}
	x = x -2;
	if (x >= 0)
	{
		ft_putchar('|');
	}
	while (x > 0)
	{
		ft_putchar(' ');
		x--;
	}
	if (x == 0)
	{
		ft_putchar('|');
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		o(x);
		while (y > 2)
		{
			middle(x);
			y--;
		}
		if (y != 1)
		{
			o(x);
		}
	}
}
