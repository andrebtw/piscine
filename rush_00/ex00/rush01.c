/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:35:58 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/10 18:13:36 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	slash_begin(int x)
{
	ft_putchar('/');
	x = x - 2;
	while (x > 0)
	{
		ft_putchar('*');
		x--;
	}
	if (x == 0)
	{
		ft_putchar('\\');
	}
	ft_putchar('\n');
}

void	middle_star(int x)
{
	if (x == 1)
	{
		ft_putchar('*');
		ft_putchar('\n');
	}
	x = x -2;
	if (x >= 0)
	{
		ft_putchar('*');
	}
	while (x > 0)
	{
		ft_putchar(' ');
		x--;
	}
	if (x == 0)
	{
		ft_putchar('*');
		ft_putchar('\n');
	}
}

void	slash_end(int x)
{
	ft_putchar('\\');
	x = x - 2;
	while (x > 0)
	{
		ft_putchar('*');
		x--;
	}
	if (x == 0)
	{
		ft_putchar('/');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		slash_begin(x);
		while (y > 2)
		{
			middle_star(x);
			y--;
		}
		if (y != 1)
		{
			slash_end(x);
		}
	}
}
