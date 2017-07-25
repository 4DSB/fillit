/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:51 by amittal           #+#    #+#             */
/*   Updated: 2017/06/23 17:00:43 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

#include "libft.h"

char	*my_strsub(char const *start, char const *end)
{
	char		*sub;
	long		diff;

	diff = end - start;
	if (diff && (sub = malloc(diff)))
		return (ft_strncpy(sub, start, diff));
	return (NULL);
}
