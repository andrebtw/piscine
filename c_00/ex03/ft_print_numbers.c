/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 13:37:43 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/08 02:27:04 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	number_str;
	int		number;

	number = 0;
	while (number <= 9)
	{
		number_str = number + '0';
		write(1, &number_str, 1);
		number++;
	}
}
