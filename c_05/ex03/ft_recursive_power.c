/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 19:39:09 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/14 19:48:24 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
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
	return (nb * ft_recursive_power(nb, power - 1));
}
