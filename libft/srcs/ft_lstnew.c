/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:14:03 by amittal           #+#    #+#             */
/*   Updated: 2017/06/27 19:56:31 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The content to put in the new link.
**				2. The size of the content of the new link.
** Operation: 	Allocates (with malloc(3)) and returns a “fresh” link.
**				The variables content and content_size of the new link are
**				initialized by copy of the parameters of the function.
**				If the parameter content is nul, the variable content is
**				initialized to	NULL and the variable content_size is
**				initialized to 0 even if the parameter content_size isn’t.
**				The variable next is initialized to NULL.
** Approach:	Uses a recursive approach of applying functions and malloc.
** Return: 		The new list.
**				If the allocation fails, the function returns NULL.
*/

#include <stdlib.h>

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*link;

	if ((link = (t_list *)malloc(sizeof(t_list))) == NULL)
		return (NULL);
	if ((link->content = malloc(content_size)) == NULL)
	{
		free(link);
		return (NULL);
	}
	if (content)
	{
		ft_memcpy(link->content, content, content_size);
		link->content_size = content_size;
	}
	else
	{
		link->content = NULL;
		link->content_size = 0;
	}
	link->next = NULL;
	return (link);
}
