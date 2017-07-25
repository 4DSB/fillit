/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_find.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 08:53:02 by amittal           #+#    #+#             */
/*   Updated: 2017/07/10 08:53:04 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Address of a new head to being the list.
**				2. Address of the data, usually FD
**				3. Address of a function that is applied on the content.
** Operation:	Return the a line without '\n' irrespective of the size.
**				Undefined behavior if a binary file is called or 
**				if, between two calls, the same file descriptor designs 
**				two distinct files although the reading from the first file
**				was not completed.
** Approach:	A static variable head which keeps track of the files read.
**				Protected: if fd is < 0 (error) or there is no line then return (-1)
**				variable tmp is being used for storing a list using lst_find.
** Return:		1, if a line has been read,.
**				0, when reading has been completed.
**				-1, if an error has occured.
*/

#include "libft.h"

t_list	*ft_lst_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		if ((cmp)(list_ptr->content, data_ref) == 0)
			return (list_ptr);
		list_ptr = list_ptr->next;
	}
	return (NULL);
}
