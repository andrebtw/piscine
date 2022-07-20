/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   link_filler.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 09:12:23 by jlaisne           #+#    #+#             */
/*   Updated: 2022/07/17 16:19:51 by jlaisne          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINK_FILLER_H
# define LINK_FILLER_H

int	link_filler_axis2(char **tab, char axis, char opposite);
int	ultimate_filler(char **tab);
int	ultimate_filler2(char **tab, int x, int y, int i);
int	filler_check(char **tab, char *axis, int i);

#endif
