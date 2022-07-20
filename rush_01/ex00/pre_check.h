/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pre_check.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 13:43:13 by jlaisne           #+#    #+#             */
/*   Updated: 2022/07/17 16:07:07 by jlaisne          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRE_CHECK_H
# define PRE_CHECK_H

void	last_check(char **tab, char *axis);
void	pre_fill(char **tab, char *axis, int x);
char	find_fill(int memo, int j);
void	final_fill(char **tab, char *axis, int x, int memo);

#endif
