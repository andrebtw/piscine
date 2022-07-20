/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 07:46:08 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/18 20:40:04 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copies the src string and paste it at the end of dest string.
// Only copies the first "size" characters of src.
// For example : dest = "Hello " ; src = "world" ; size = 3
// The returning string will be : "Hello wor"
// If the size is superior than the src size, it will repeat itself.
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	dest_size;
	unsigned int	return_value;
	unsigned int	counter;

	src_size = 0;
	dest_size = 0;
	counter = 0;
	while (dest[dest_size] != '\0')
		dest_size++;
	while (src[src_size] != '\0')
		src_size++;
	return_value = (src_size + dest_size);
	if (size <= dest_size)
		return (src_size + size);
	while (counter < (size - dest_size - 1))
	{
		if (src[counter] != '\0')
		{
			dest[dest_size + counter] = src[counter];
		}
		counter++;
	}
	dest[dest_size + counter] = '\0';
	return (return_value);
}
