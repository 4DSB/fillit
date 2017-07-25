/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 17:08:41 by amittal           #+#    #+#             */
/*   Updated: 2017/07/24 15:21:34 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

/*
** Comparing the file descriptor.
*/

static int		ft_fdcmp(t_save *a, int *b)
{
	return (a->fd - *b);
}

/*
**Freeing the contents of gnl list.
*/

static void		ft_gnlfree(void *a, size_t size)
{
	(void)size;
	ft_strdel(&((t_save*)a)->str);
	free(a);
}

/*
** ft_newfd is a function to take a new FD and store it in a t_save type struct
** also allocated memory of length BUF_SIZE for head. str will be 0'd by bezero
** that is being used in memalloc.
**
*/

static t_list	*ft_newfd(t_list **head, int fd)
{
	t_save		new;

	new.fd = fd;
	new.str = ft_memalloc((BUFF_SIZE > 0 ? BUFF_SIZE : 0) + 1);
	ft_lstadd(head, ft_lstnew(&new, sizeof(t_save)));
	return (*head);
}

/*
** ft_loop_read, reads till the BUF_SIZE from fd into buf. 
** ret is the number of bytes read.
** if number of bytes read is more than a line, then it copied to save
** and res is appended to line.
** if any error occurs then return -1.
** if there is a '/n; then we return 1 otherwise we keep reading. while we can.
** we return 1 if if reading is finished and no new line and something has been read
** or 0 is there no nothing in line.

*/

static int		ft_loop_read(int fd, char **line, char *save)
{
	char	buf[BUFF_SIZE + 1];
	char	*pos;
	char	*tmp;
	int		ret;

	while ((ret = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[ret] = 0;
		tmp = *line;
		if ((pos = ft_strchr(buf, '\n')))
		{
			ft_strcpy(save, pos + 1);
			*pos = 0;
		}
		if (!(*line = ft_strjoin(*line, buf)))
			return (-1);
		ft_strdel(&tmp);
		if (pos)
			return (1);
	}
	if (ret < 0)
		return (-1);
	return (**line ? 1 : 0);
}

/*
** Argument:	1. File Descriptor that will be used to read.
**				2. The address of a pointer to a character that will be used
**				   to save the line read from the file descriptor.
** Operation:	Return the a line without '\n' irrespective of the size.
**				Undefined behavior if a binary file is called or 
**				if, between two calls, the same file descriptor designs 
**				two distinct files although the reading from the first file
**				was not completed.
** Approach:	I have a static variable head which keeps a track of the files being read.
**				Protected: if fd is < 0 (error) or there is no line then return (-1)
**				variable tmp will be the NULL on the first call of gnl. Hence a new list
**				of type t_list with content t_save will be created.
**				a list already exists thenthe file descriptor is checked.
**				Save will point to the content str, which will be all 0's for 1st fd.
**				next I am allocating memory for line using strdup and save.
**				then, searching for the first '\n' in line and storing location in pos.
**				copying contents read after /n to save for future and making /n to 0.
**				Now line has the complete line with a 0 at the '\n' position.
**				If there is no new line in line, that means a fd too, or till buf size,
**				then we need to read using ft_loop_read.
** Return:		1, if a line has been read,.
**				0, when reading has been completed.
**				-1, if an error has occured.
*/

int				get_next_line(int const fd, char **line)
{
	static t_list	*head;
	t_list			*tmp;
	char			*pos;
	char			*save;
	int				ret;

	if (fd < 0 || !line)
		return (-1);
	if (!(tmp = ft_lst_find(head, (void *)&fd, &ft_fdcmp)))
		tmp = ft_newfd(&head, fd);
	save = ((t_save*)tmp->content)->str;
	if (!(*line = ft_strdup(save)))
		return (-1);
	ft_bzero(save, BUFF_SIZE + 1);
	if ((pos = ft_strchr(*line, '\n')))
	{
		ft_strcpy(save, pos + 1);
		*pos = 0;
		return (1);
	}
	if (!(ret = ft_loop_read(fd, line, save)))
		ft_lst_delif(&head, (int *)&fd, ft_fdcmp, &ft_gnlfree);
	return (ret);
}
