/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstevery.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/23 21:50:01 by amittal           #+#    #+#             */
/*   Updated: 2017/06/26 01:54:29 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Pointer to a list.
**				2. The address of a function to be applied to each link.
** Operation: 	Applies a funtion to each element in a list.
** Approach: 	If the applied function is unsuccessful, returns 0.
** Return: 		1 if the funtion was successfully applied to all elements.
*/

#include <string.h>

#include "libft.h"

int		ft_lstevery(t_list *lst, int (*f)(t_list *elem))
{
	while (lst)
	{
		if (!f(lst))
			return (0);
		lst = lst->next;
	}
	return (1);
}
