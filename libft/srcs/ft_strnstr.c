/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:32:07 by amittal           #+#    #+#             */
/*   Updated: 2017/07/21 23:59:06 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. String to be queried in.
**				2. String to be queried.
**				3. Maximum number of characters to be searched.
** Operation:	locates the first occurrence of the null-terminated string
**				query in the null-terminated string str, where not more than n
**				characters are searched
** Approach:	Standard C library function, hence followed man.
** Return:		If query is an empty string, str is returned.
**				if query occurs nowhere in str, NULL is returned.
**				Otherwise a pointer to the first character of the first
**				occurrence of query is returned.
*/

#include <string.h>

#include "libft.h"

char	*ft_strnstr(const char *str, const char *query, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	nlen;

	nlen = ft_strlen(query);
	if (ft_strlen(str) < nlen)
		return (NULL);
	if (*query == '\0')
		return ((char *)str);
	i = 0;
	while (i + nlen <= n && str[i])
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
