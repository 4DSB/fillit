/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptnew.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 11:32:55 by amittal           #+#    #+#             */
/*   Updated: 2017/06/29 11:32:55 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. X-axis coordinate.
**				2. Y-axis coordinate.
** Operation:	Uses the new struct type s_point(typedef: t_point) which has
**				two integer variables. Creates a new list and substitutes the
**				parameters value with x and y.
** Return:		Returns a pointer to the new list.
**				NULL, if unable to allocate the space for the new list.
*/

#include <string.h>
#include <stdlib.h>

#include "libft.h"

t_point	*ft_ptnew(int x, int y)
{
	t_point	*new;

	if ((new = malloc(sizeof(t_point))) == NULL)
		return (NULL);
	new->x = x;
	new->y = y;
	return (new);
}
