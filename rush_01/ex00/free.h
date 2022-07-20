/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 12:05:13 by jlaisne           #+#    #+#             */
/*   Updated: 2022/07/17 13:04:15 by aveau            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FREE_H
# define FREE_H

void	free_all(char **tab, char *axis);
void	free_tab(char **tab);
void	free_axis(char *axis);

#endif
