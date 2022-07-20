/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 08:13:36 by jlaisne           #+#    #+#             */
/*   Updated: 2022/07/17 14:53:12 by jlaisne          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_error.h"
#include "ft_tab.h"
#include "ft_place_cases.h"

int	main(int argc, char **argv)
{
	char	tab[16];
	int		error;

	if (argc != 2)
	{
		write(1, "ERROR", 5);
		return (0);
	}
	error = ft_errorlength(argv, tab);
	error += ft_check_space(argv);
	error += ft_check_str(argv);
	if (error != 3)
		return (return_error());
	create_axis(argv);
	return (0);
}
