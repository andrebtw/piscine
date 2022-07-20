/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 20:45:19 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/18 17:16:56 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index <= 1)
    	return (index);
	return (ft_fibonacci(index-1) + ft_fibonacci(index-2));
}

int	main(void)
{
	printf("%d", ft_fibonacci(15));
}