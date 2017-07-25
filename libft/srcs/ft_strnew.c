/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 06:53:54 by amittal           #+#    #+#             */
/*   Updated: 2017/06/19 21:44:03 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The size of the string to be allocated.
** Operation:	Allocates (with malloc(3)) and returns a “fresh” string ending
**				with ’\0’. Each character of the string is initialized at
**				’\0’. If the allocation fails the function returns NULL.
** Return:		1 or 0 according to if the 2 strings are identical or not.
*/

#include <stdlib.h>

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*str;

	if ((str = (char *)malloc(sizeof(char) * (size + 1))))
		ft_bzero(str, size + 1);
	return (str);
}
