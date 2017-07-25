/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 20:30:33 by amittal           #+#    #+#             */
/*   Updated: 2017/07/24 20:30:34 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int	check_char(char *line)
{
	int		i;

	i = 0;
	while (line[i])
	{
		if (!(line[i] == '.' || line[i] == '#'))
			return (0);
		i++;
	}
	return (1);
}

/*
** j represents the number of new lines.
** We increment it in the end to make it number of tetrominos pieces.
*/

int		check_file(char *file)
{
	char	*line;
	int		fd;
	int		i;
	int		j;

	if((fd = open(file, O_RDONLY)) == -1)
		return (0);
	j = 0;
	i = 0;
	while (get_next_line(fd, &line))
	{
		if (i == 4)
		{
			if (ft_strlen(line))
				return(0);
			++j;
			i = -1;
		}
		else if (ft_strlen(line) !=4 || !check_char(line))
			return(0);
		++i;
	}
	++j;
	close(fd);
	return (i==4 ? j : 0);
}

int			ft_square(int j)
{
	int		i;

	i = 0;
	while ((i * i) < j)
		i++;
	return (i);
}
