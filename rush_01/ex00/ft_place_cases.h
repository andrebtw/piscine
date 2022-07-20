/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_place_cases.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:00:43 by jlaisne           #+#    #+#             */
/*   Updated: 2022/07/17 07:54:29 by jlaisne          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PLACE_CASES_H
# define FT_PLACE_CASES_H

char	place_in(char **tab, int x, int y, int nbr);
char	can_place(char **tab, int x, int y, int nbr);
char	find_x_y(char axis, char depth);

#endif
