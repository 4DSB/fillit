/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 23:29:10 by amittal           #+#    #+#             */
/*   Updated: 2017/06/25 23:29:10 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. A pointer’s to the first link of a list.
** Operation: 	Reverses all elements of a list.
** Approach:	Instead of moving, just changing the ->next addresses.
** Return: 		NULL if an empty list is passed.
*/

#include <string.h>

#include "libft.h"

void	ft_lstrev(t_list **begin_list)
{
	t_list	*prev;
	t_list	*curr;
	t_list	*next;

	if (begin_list == NULL)
		return ;
	prev = NULL;
	curr = *begin_list;
	while (curr)
	{
		next = curr->next;
		curr->next = prev;
		prev = curr;
		curr = next;
	}
	*begin_list = prev;
}
