/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 20:42:26 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/17 03:01:08 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	src_size;
	char	*return_src;

	src_size = 0;
	while (src[src_size] != '\0')
		src_size++;
	return_src = (char*)malloc(src_size + 1);
	if (src == 0)
		return (0);
	src_size = 0;
	while (src[src_size] != '\0')
		{
			return_src[src_size] = src[src_size];
			src_size++;
		}
	return_src[src_size] = '\0';
	return (return_src);
}
