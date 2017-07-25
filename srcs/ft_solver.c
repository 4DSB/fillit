/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amittal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 21:53:10 by amittal           #+#    #+#             */
/*   Updated: 2017/07/24 21:53:11 by amittal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

static int		place_pts(t_xy pos, t_fillst *tmp, char **tab)
{
	int			k;

	k = 0;
	while (k < 4 && tab[pos.x + tmp->pts[k].x])
	{
		if (tab[pos.x + tmp->pts[k].x][pos.y + tmp->pts[k].y] != '.')
				break ;
		++k;
	}
	if (k == 4)
	{
		k = 0;
		while (k < 4)
		{
			tab[pos.x + tmp->pts[k].x][pos.y + tmp->pts[k].y] = tmp->letter;
			++k;
		}
		return (1);
	}
	return(0);
}

static void		init_tab(char ***tab, int max)
{
	char		**ret;
	int			i;
	int			j;

	if (!(ret = (char **)malloc(sizeof(char *) * (max + 1))))
		return ;
	i = 0;
	while (i < max)
	{
		if (!(ret[i] = (char *)malloc(sizeof(char) * (max + 1))))
			return ;
		j = 0;
		while (j < max)
		{
			ret[i][j] = '.';
			++j;
		}
		ret[i][j] = '\0';
		++i;
	}
	ret[i] = NULL;
	*tab = ret;
}

static void		del_pts(t_fillst *tmp, char **tab, int max)
{
	t_xy	pos2;
	int		i;

	i = 0;
	pos2.x = -1;
	while (++(pos2.x) < max)
	{
		pos2.y = -1;
		while (++(pos2.y) < max)
			if (tab[pos2.x][pos2.y] == tmp->letter)
			{
				tab[pos2.x][pos2.y] = '.';
				++i;
				if (i == 4)
					return;
			}
	}
}

static int		find_smallest_sq(t_fillst *tmp, char **tab, int max)
{
	t_xy		pos;

	if (!tmp)
	{
		ft_printmap(tab, "\n");
		return(1);
	}
	pos.x = 0;
	pos.y = 0;
	while (pos.x < max)
	{
		if (place_pts(pos, tmp, tab))
			if (find_smallest_sq(tmp->next, tab, max))
				return(1);
		del_pts(tmp, tab, max);
		if (++(pos.y) == max)
		{
			pos.y = 0;
			++(pos.x);
		}
	}
	return (0);
}

void			solve(t_fillst **start, int j)
{
	t_fillst	*tmp;
	char		**tab;
	int			max;
	int			ret;

	max = ft_square(j * 4);
	ret = 0;
	tmp = *start;
	while (!ret)
	{
		init_tab(&tab, max);
		ret = find_smallest_sq(tmp, tab, max);
		free (tab);
		++max;
	}
}