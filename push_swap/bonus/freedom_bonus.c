/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   freedom_bonus.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 19:10:06 by asidqi            #+#    #+#             */
/*   Updated: 2023/03/14 14:25:29 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	free_2d(char **bagage)
{
	int	i;

	i = 0;
	while (bagage[i])
	{
		free(bagage[i]);
		i++;
	}
	free(bagage);
}

void	clear_free(t_list **stack_a, t_list **stack_b, char **bagage)
{
	if (stack_a || stack_b)
	{
		if (stack_b)
			ft_lstclear(stack_b);
		else
			ft_lstclear(stack_a);
	}
	if (bagage)
		free_2d(bagage);
	ft_putstr_fd("Error\n", 2);
	exit(1);
}
