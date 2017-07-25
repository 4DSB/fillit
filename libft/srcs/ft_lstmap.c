/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:12 by amittal           #+#    #+#             */
/*   Updated: 2017/06/29 11:52:08 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. A pointer’s to the first link of a list.
**				2. The address of a function to apply to each link of a list.
** Operation: 	Iterates a list lst and applies the function f to each link to
**				create a “fresh” list (using malloc(3)) resulting from the
**				successive applications of f.
** Return: 		The new list.
**				If the allocation fails, the function returns NULL.
*/

#include <string.h>

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*head;
	t_list	*map;

	if (!lst || !f)
		return (NULL);
	map = f(lst);
	head = map;
	lst = lst->next;
	while (lst)
	{
		map->next = f(lst);
		map = map->next;
		lst = lst->next;
	}
	return (head);
}
