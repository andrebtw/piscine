/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 01:48:18 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/18 10:38:35 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_function(int sign, int number, int i, char *str)
{
	int	j;

	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			sign++;
		while (str[i + j] >= '0' && str[i + j] <= '9')
		{
			number = number * 10 + (str[i + j] - 48);
			j++;
		}
		if (number != 0)
		{
			if (sign % 2 == 1)
				return (number * (-1));
			return (number);
		}
		if (str[i] != '+' && str[i] != '-')
			return (0);
		i++;
	}
	return (0);
}

int	ft_atoi(char *str)
{
	int		sign;
	int		number;
	int		i;

	number = 0;
	i = 0;
	sign = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
		|| str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	return (ft_function(sign, number, i, str));
}

int	main(void)
{
	char	str[127] = "   +++--++-+-789787g8";
	printf("%d", ft_atoi(str));
	return (0);
}