/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tetread.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olkovale <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/25 22:26:09 by olkovale          #+#    #+#             */
/*   Updated: 2017/06/29 01:15:27 by olkovale         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

#include "libft.h"
#include "tetread.h"

t_read_tetriminos		*read_tetriminos(int fd)
{
	char				buf[21];
	char				sep;
	t_read_tetriminos	*ret;
	int					read_ret;
	int					sep_ret;

	if (!(ret = (t_read_tetriminos *)malloc(sizeof(t_read_tetriminos))))
		return (NULL);
	ret->tetriminos = NULL;
	while (((read_ret = read(fd, buf, 20))) > 0)
	{
		buf[20] = '\0';
		ft_lstadd(&(ret->tetriminos), ft_lstnew(buf, 21));
		if ((sep_ret = (read(fd, &sep, 1))) <= 0)
			break ;
	}
	ret->err = read_ret <= 0 || sep_ret < 0;
	ft_lstrev(&(ret->tetriminos));
	return (ret);
}
