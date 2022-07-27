/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 21:31:30 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/27 14:38:45 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Copies the src string and paste it at the end of dest string.
// For example : dest = "Hello " ; src = "world" ;
// The returning string will be : "Hello world"
char	*ft_strcat(char *dest, char *src)
{
	unsigned int	src_size;
	unsigned int	dest_size;

	src_size = 0;
	dest_size = 0;
	while (dest[dest_size] != '\0')
		dest_size++;
	while (src[src_size] != '\0')
	{
		dest[dest_size] = src[src_size];
		dest_size++;
		src_size++;
	}
	dest[dest_size] = '\0';
	return (dest);
}
