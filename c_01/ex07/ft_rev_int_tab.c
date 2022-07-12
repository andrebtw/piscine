/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 23:28:23 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/09 20:39:17 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	size_b;

	size_b = size - 1;
	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size_b];
		tab[size_b] = temp;
		size_b--;
		i++;
	}
}
