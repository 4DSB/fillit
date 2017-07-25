/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_make_lst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 20:48:24 by amittal           #+#    #+#             */
/*   Updated: 2017/07/24 20:48:25 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

/*
** Argument:	1. 2nd argument from command line (file)
**				2. Start point(passed in as NULL, t_fillst type)
**				3. Number of tetrominos
*/


int				ft_make_lst(char *file, t_fillst **start, int j)
{
	char	**tab;
	char	*line;
	int		fd;
	int		i;

	if (!(tab = (char **)malloc(sizeof(char *) * 4)))
		return (0);
	fd = open(file, O_RDONLY);
	while (j)
	{
		i = 0;
		while (i < 4)
		{
				get_next_line(fd, &line);
				tab[i] = ft_strdup(line);
				++i;
		}
		if (!add_lst(start, tab))
			return (0);
		get_next_line(fd, &line);
		--j;
	}
	close(fd);
	return (1);
}

/*
** Arguments:	1. t_fillst type variable, in which pts need to be added.
**				   The first variable already has a letter.
**				2. Array of arrays which consists of each line.
**	This function also checks the number of hashes using k.
*/

static int 		add_pts(t_fillst **tmp, char **tab)
{
	t_fillst	*t;
	int			i;
	int			j;
	int			k;

	t = *tmp;
	i = -1;
	k = 0;
	while (++i < 4)
	{
		j = -1;
		while(tab[i][++j])
		{
			if (tab[i][j] == '#')
			{
				if (k == 4)
					return(0);
				t->pts[k].x = i;
				t->pts[k].y = j;
				++k;
			}
		}
	}
	return (k == 4 ? 1 : 0);
}

/*
** checks if the pieces are valid tetrominos pieces.
*/

static int		check_pts(t_fillst **tmp)
{
	t_fillst	*t;
	int			tot;
	int			i;

	t = *tmp;
	tot = 0;
	i = -1;
	while (++i < 4)
		tot = (tot * 10 +t->pts[i].x) * 10 + t->pts[i].y;
	if (tot == 10203 || tot == 10210 || tot == 10211 || tot == 10212
			|| tot == 11011 || tot == 11020 || tot == 11112 || tot == 11121
			|| tot == 101112 || tot == 101120 || tot == 101121 || tot == 102021
			|| tot == 102030 || tot == 1021011 || tot == 1101112 || tot == 1101120
			|| tot == 1101121 || tot == 1112021 || tot == 2101112)
		return (1);
	return (0);
}

static int		norm_pts(t_fillst **tmp)
{
	t_fillst	*t;

	t = *tmp;
	while (t->pts[0].x && t->pts[1].x && t->pts[2].x && t->pts[3].x)
	{
		--(t->pts[0].x);
		--(t->pts[1].x);
		--(t->pts[2].x);
		--(t->pts[3].x);
	}
		while (t->pts[0].y && t->pts[1].y && t->pts[2].y && t->pts[3].y)
	{
		--(t->pts[0].y);
		--(t->pts[1].y);
		--(t->pts[2].y);
		--(t->pts[3].y);
	}
	return (check_pts(tmp));
}

/*
** Arguments:	1. start point of the list
**				2. Array of arrays which consists of each line.
** This function also checks the number of tetrominos pieces.
*/

int				add_lst(t_fillst **start, char **tab)
{
	t_fillst	*tmp;
	t_fillst	*new;

	tmp = *start;
	if (!(new = (t_fillst *)malloc(sizeof(t_fillst))))
		return (0);
	new->next = NULL;
	new->letter = 'A';
	new->pts = (t_xy *)malloc(sizeof(t_xy) * 4);
	if (tmp)
	{
		++(new->letter);
		while (tmp->next)
		{
			tmp = tmp->next;
			++(new->letter);
		}
		tmp->next = new;
	}
	else
		*start = new;
	if (!add_pts(&new, tab) || new->letter > 'Z')
		return (0);
	return (norm_pts(&new) ? 1 : 0);
}
