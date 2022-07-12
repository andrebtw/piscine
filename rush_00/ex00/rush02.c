/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:42:50 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/10 18:13:40 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 17:35:58 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/10 17:40:15 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	a_begin(int x)
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
		ft_putchar('A');
	}
	ft_putchar('\n');
}

void	b_middle(int x)
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

void	c_end(int x)
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
		ft_putchar('C');
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	if (x > 0 && y > 0)
	{
		a_begin(x);
		while (y > 2)
		{
			b_middle(x);
			y--;
		}
		if (y != 1)
		{
			c_end(x);
		}
	}
}
