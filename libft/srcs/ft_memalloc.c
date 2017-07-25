/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:53:54 by amittal           #+#    #+#             */
/*   Updated: 2017/04/11 22:21:12 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The size of the memory that needs to be allocated.
** Operation: 	Allocates (with malloc(3)) and returns a “fresh” memory area.
**				The memory allocated is initialized to 0.
** Approach: 	bzero is used to initialize the memory to zero.
** Return: 		The allocated memory area.
**				NULL, if allocation fails.
*/

#include <stdlib.h>

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*m;

	if ((m = malloc(size)))
		ft_bzero(m, size);
	return (m);
}
