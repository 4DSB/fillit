/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:53:54 by amittal           #+#    #+#             */
/*   Updated: 2017/07/22 00:07:20 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The string’s address that needs to be freed and
**				   its pointer set to NULL.
** Operation:	Takes as a parameter the address of a string that need to be
**				freed with free(3), then sets its pointer to NULL.
** Return:		None.
*/

#include <stdlib.h>

#include "libft.h"

void	ft_strdel(char **ap)
{
	if (ap)
	{
		free(*ap);
		*ap = NULL;
	}
}
