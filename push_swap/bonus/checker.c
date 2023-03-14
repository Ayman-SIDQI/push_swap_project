/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/11 16:06:29 by asidqi            #+#    #+#             */
/*   Updated: 2023/03/13 20:16:32 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include<stdio.h>

int	get_instructions(t_list	**stack_a, t_list **stack_b, char *mov)
{
	if (ft_strcmp(mov, "sa\n") == 0)
		checker_sa(stack_a, 'K');
	else if (ft_strcmp(mov, "sb\n") == 0)
		checker_sb(stack_a, 'K');
	else if (ft_strcmp(mov, "ss\n") == 0)
		checker_ss(stack_a, stack_b);
	else if (ft_strcmp(mov, "pa\n") == 0)
		checker_pa(stack_a, stack_b);
	else if (ft_strcmp(mov, "pb\n") == 0)
		checker_pb(stack_a, stack_b);
	else if (ft_strcmp(mov, "ra\n") == 0)
		checker_ra_rb(stack_a, 'K');
	else if (ft_strcmp(mov, "rb\n") == 0)
		checker_ra_rb(stack_b, 'K');
	else if (ft_strcmp(mov, "rr\n") == 0)
		checker_rr(stack_a, stack_b);
	else if (ft_strcmp(mov, "rra\n") == 0)
		checker_rra_rrb(stack_a, 'K');
	else if (ft_strcmp(mov, "rrb\n") == 0)
		checker_rra_rrb(stack_b, 'K');
	else if (ft_strcmp(mov, "rrr\n") == 0)
		checker_rrr(stack_a, stack_b);
	else
		return (-1);
	return (69);
}

int	main(int ac, char **av)
{
	t_list	*all;
	t_list	*ball;
	short	status;
	char	*gnl;

	all = NULL;
	status = 69;
	if (ac <= 1)
		return (0);
	all = split_numbers(av, all);
	rank_list(all, ft_lstsize(all));
	gnl = get_next_line(0);
	while (gnl != NULL)
	{
		status = get_instructions(&all, &ball, gnl);
		if (status == -1)
			break ;
		free(gnl);
		gnl = get_next_line(0);
	}
	if (check_sort(all) == 1 && !ball && status != -1)
		return (ft_putstr_fd("OK\n", 1), 1);
	else if (check_sort(all) != 1 || status != -1 || ball)
		return (ft_putstr_fd("KO\n", 1), 1);
	return (ft_putstr_fd("Error\n", 1), 1);
}
