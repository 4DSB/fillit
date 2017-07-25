/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:10 by amittal           #+#    #+#             */
/*   Updated: 2017/06/19 20:52:17 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Pointer to a list.
**				2. The address of a function to be applied to each link.
** Operation: 	Applies a funtion to each element in a list.
**				Similar to ft_lstevery.
** Approach: 	If the list or function does not exist, returns void.
**				Else, applies a funtion to all elements of a list.
** Return: 		None.
*/

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}
}
