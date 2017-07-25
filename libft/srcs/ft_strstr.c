/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/11 01:51:04 by amittal           #+#    #+#             */
/*   Updated: 2017/07/22 00:02:06 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. String to be queried in.
**				2. String to be queried.
** Operation:	locates the first occurrence of the null-terminated string
**				query in the null-terminated string str.
** Approach:	Standard C library function, hence followed man.
** Return:		If query is an empty string, str is returned.
**				If query occurs nowhere in str, NULL is returned.
**				Otherwise a pointer to the first character of the first
**				occurrence of query is returned.
*/

#include <string.h>

#include "libft.h"

char	*ft_strstr(const char *str, const char *query)
{
	size_t	i;
	size_t	j;

	if (ft_strlen(str) < ft_strlen(query))
		return (NULL);
	if (*query == '\0')
		return ((char *)str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (query[j] && str[i + j] == query[j])
			j++;
		if (query[j] == '\0')
			return ((char *)(str + i));
		i++;
	}
	return (NULL);
}
