/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_delif.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 08:54:35 by amittal           #+#    #+#             */
/*   Updated: 2017/07/10 08:54:40 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. Pointer to a list.
**				2. Fle Descriptor that will be used to read.
**				3. Function to ...
**				4. function to free get_next_line list/str in the t_save.
** Operation:	If the file descriptor matches, clear out the contents of
**				the list.
** Return:		None.
*/


#include "libft.h"

void	ft_lst_delif(
		t_list **alst,
		void *data_ref,
		int (*cmp)(),
		void (*del)(void *, size_t))
{
	t_list	*tmp;
	t_list	**indirect;

	indirect = alst;
	while (*indirect)
	{
		if ((*cmp)((*indirect)->content, data_ref) == 0)
		{
			tmp = (*indirect);
			(*indirect) = (*indirect)->next;
			ft_lstdelone(&tmp, del);
		}
		else
			indirect = &(*indirect)->next;
	}
}
