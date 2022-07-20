/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tab.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 10:03:57 by jlaisne           #+#    #+#             */
/*   Updated: 2022/07/17 13:14:57 by aveau            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAB_H
# define FT_TAB_H

void	create_axis(char **argv);
void	loop(char *axis, char **tab);
char	**create_tab(void);
void	check(char *axis, char **tab);
void	display(char **tab, char *axis);

#endif
