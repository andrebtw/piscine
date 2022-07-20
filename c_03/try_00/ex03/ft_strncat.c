/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 22:19:30 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/17 21:22:20 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copies the src string and paste it at the end of dest string.
// Only copies the first n characters of src.
// For example : dest = "Hello " ; src = "world" ; n = 3
// The returning string will be : "Hello wor"
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	src_size;
	unsigned int	dest_size;

	src_size = 0;
	dest_size = 0;
	while (dest[dest_size] != '\0')
		dest_size++;
	while (src[src_size] != '\0' && nb > 0)
	{
		dest[dest_size] = src[src_size];
		dest_size++;
		src_size++;
		nb--;
	}
	dest[dest_size] = '\0';
	return (dest);
}
