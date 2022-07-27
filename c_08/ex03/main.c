/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anrodri2 <anrodri2@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 19:34:47 by anrodri2          #+#    #+#             */
/*   Updated: 2022/07/22 22:34:13 by anrodri2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"
void set_point(struct t_point *point)
{
    point->x = 42;
    point->y = 21;
}
int main(void)
{
    struct t_point point;
    set_point(&point);
    return (0);
}