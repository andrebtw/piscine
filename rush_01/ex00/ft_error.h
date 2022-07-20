/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlaisne <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 09:03:57 by jlaisne           #+#    #+#             */
/*   Updated: 2022/07/17 13:10:15 by aveau            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ERROR_H
# define FT_ERROR_H

int	ft_errorlength(char **argv, char *tab);
int	return_error(void);
int	ft_check_space(char **argv);
int	ft_check_str(char **argv);

#endif
