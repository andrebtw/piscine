/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/12 05:04:21 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/26 21:43:08 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Compares the difference between the 2 strings,
// Returns the first difference found in ASCII
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}
