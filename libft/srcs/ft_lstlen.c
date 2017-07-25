/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 01:39:54 by amittal           #+#    #+#             */
/*   Updated: 2017/06/29 01:39:54 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Pointer to a list.
** Operation: 	Calculates the length of the list.
** Approach: 	Iterates through a list and increments a counter.
** Return: 		length of list.
*/

#include <string.h>
#include "libft.h"

size_t	ft_lstlen(t_list *lst)
{
	size_t i;

	i = 0;
	while (lst)
	{
		i++;
		lst = lst->next;
	}
	return (i);
}
