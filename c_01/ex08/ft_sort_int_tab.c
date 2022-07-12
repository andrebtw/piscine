/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 04:04:44 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/09 20:39:24 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	size_b;

	i = 0;
	size_b = 0;
	while (i < size)
	{
		while (size_b < size)
		{
			if (tab[i] < tab[size_b])
			{
				temp = tab[i];
				tab[i] = tab[size_b];
				tab[size_b] = temp;
			}
			size_b++;
		}
		i++;
		size_b = 0;
	}
}
