/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptsub.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 12:01:23 by amittal           #+#    #+#             */
/*   Updated: 2017/06/29 12:01:23 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. A t_point type list for substraction.
**				2. A t_point type list which needs to the substracted.
** Operation:	Substracts the x and y points of 2nd list from 1st list.
**				Stores these values into a new list using ft_ptnew.
** Return:		Returns a new list with the new values of x and y obtained from
**				substraction.
*/

#include <string.h>

#include "libft.h"

t_point	*ft_ptsub(t_point *minuend, t_point *subtrahend)
{
	return (ft_ptnew(minuend->x - subtrahend->x, minuend->y - subtrahend->y));
}
