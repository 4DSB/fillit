/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <anurag.213@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/18 08:15:20 by amittal           #+#    #+#             */
/*   Updated: 2017/07/21 23:59:43 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Argument:	1. The string to output.
**				2. The file descriptor.
** Operation:	Outputs the string s to the file descriptor fd followed by a
**				’\n’.
** Return:		None.
*/

#include <unistd.h>

#include "libft.h"

void	ft_putendl_fd(char const *s, int fd)
{
	char	newline;

	if (s)
	{
		newline = '\n';
		write(fd, s, ft_strlen(s));
		write(fd, &newline, 1);
	}
}
