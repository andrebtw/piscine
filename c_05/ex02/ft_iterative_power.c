/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 18:35:30 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/14 19:16:39 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	nb_begin;

	nb_begin = nb;
	if (power < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (nb);
	if (power == 1)
		return (nb);
	while (power > 1)
	{
		nb = nb * nb_begin;
		power--;
	}
	return (nb);
}
