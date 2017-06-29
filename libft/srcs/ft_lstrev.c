/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 23:29:10 by olkovale          #+#    #+#             */
/*   Updated: 2017/06/25 23:29:10 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
