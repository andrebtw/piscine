/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/11 11:06:17 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/12 03:44:40 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	char			*base;

	i = 0;
	base = "0123456789abcdef";
	while (str[i] != '\0')
	{
		if ((str[i] <= 31) || (str[i] >= 127))
		{
			write(1, "\\", 1);
			write(1, &base[(unsigned char)str[i] / 16], 1);
			write(1, &base[(unsigned char)str[i] % 16], 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}
