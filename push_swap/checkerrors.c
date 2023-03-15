/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerrors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 20:06:37 by asidqi            #+#    #+#             */
/*   Updated: 2023/03/15 10:08:07 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	checksafe(char *str, t_list *all, char **whole)
{
	if ((str[0] == '\0') \
	|| (ft_isdigit(str)) \
	|| (ft_atoi(str) == 0 && !ft_iszerostring(str)) \
	|| !(ft_strcmp(str, "\0")) \
	|| ft_strcmp1(str, ft_itoa(ft_atoi(str))) \
	|| !(ft_atoi(str) >= -2147483648 && ft_atoi(str) <= 2147483647)
	)
	{
		ft_putstr_fd("Error\n", 2);
		ft_lstclear(&all);
		free_2d(whole);
		exit(1);
	}
}

void	checkdouble(t_list *all)
{
	int			current;
	t_list		*tmp;

	while (all)
	{
		tmp = all->next;
		current = all->content;
		while (tmp != NULL)
		{
			if (current == tmp->content)
			{
				ft_putstr_fd("Error\n", 2);
				ft_lstclear(&all);
				exit(1);
			}
			tmp = tmp->next;
		}
		all = all->next;
	}
}
