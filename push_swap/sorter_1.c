/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_1.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 21:53:07 by asidqi            #+#    #+#             */
/*   Updated: 2023/03/06 21:35:57 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	sort_two(t_list **stack_a)
{
	if ((*stack_a)->content > (*stack_a)->next->content)
		sa(stack_a, 'a');
}

void	sort_three(t_list **stack_a)
{
	rank_list((*stack_a), ft_lstsize((*stack_a)));
	if ((*stack_a)->rank == 3)
		ra_rb(stack_a, 'a');
	if ((*stack_a)->next->rank == 3)
		rra_rrb(stack_a, 'a');
	if ((*stack_a)->next->rank == 1)
		sa(stack_a, 'a');
}

int	find_min(t_list *stack)
{
	int	min;
	int	position;

	min = stack->rank;
	position = 1;
	while (stack)
	{
		if (min >= stack->rank)
		{
			min = stack->rank;
			if (min == 1)
				return (position);
		}
		stack = stack->next;
		position++;
	}
	return (position);
}

void	sort_four(t_list **stack_a, t_list **stack_b)
{
	if (find_min(*stack_a) <= (ft_lstsize((*stack_a)) / 2))
	{
		while ((*stack_a)->rank != 1)
			ra_rb(stack_a, 'a');
	}
	else
	{
		while (ft_lstlast(*stack_a)->rank != 1)
		{
			rra_rrb(stack_a, 'a');
		}
		rra_rrb(stack_a, 'a');
	}
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	if (find_min(*stack_a) <= (ft_lstsize((*stack_a)) / 2))
	{
		while ((*stack_a)->rank != 1)
			ra_rb(stack_a, 'a');
	}
	else
	{
		while (ft_lstlast(*stack_a)->rank != 1)
			rra_rrb(stack_a, 'a');
		rra_rrb(stack_a, 'a');
	}
	pb(stack_a, stack_b);
	rank_list((*stack_a), ft_lstsize((*stack_a)));
	sort_four(stack_a, stack_b);
	pa(stack_a, stack_b);
}
