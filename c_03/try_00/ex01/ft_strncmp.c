/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 18:05:13 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/17 19:10:16 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Compares the difference between the 2 strings,
//Returns the first difference found in ASCII
//Stops the function when n is supperior to s1 lenght
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
