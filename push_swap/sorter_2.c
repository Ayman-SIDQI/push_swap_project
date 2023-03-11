/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/07 18:10:27 by asidqi            #+#    #+#             */
/*   Updated: 2023/03/10 15:43:42 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	max_byvalue(t_list *stack)
{
	int	max_value;

	max_value = stack->content;
	while (stack)
	{
		if (max_value <= stack->content)
			max_value = stack->content;
		stack = stack->next;
	}
	return (max_value);
}

int	find_max(t_list *stack)
{
	int	max;
	int	position;

	position = 1;
	max = max_byvalue(stack);
	while (stack)
	{
		if (max == stack->content)
			return (position);
		stack = stack->next;
		position++;
	}
	return (position);
}

void	homecoming(t_list **stack_a, t_list **stack_b)
{
	rank_list((*stack_b), ft_lstsize((*stack_b)));
	while ((*stack_b))
	{
		if (find_max(*stack_b) <= (ft_lstsize(*stack_b) / 2))
		{
			while ((*stack_b)->content != max_byvalue(*stack_b))
				ra_rb(stack_b, 'b');
			pa(stack_a, stack_b);
		}
		else
		{
			while (ft_lstlast(*stack_b)->content != max_byvalue(*stack_b))
				rra_rrb(stack_b, 'b');
			rra_rrb(stack_b, 'b');
			pa(stack_a, stack_b);
		}
	}
}

short	range(int min, int current_rank)
{
	int	max;

	max = min + 15;
	if (current_rank >= min && current_rank < max)
		return (0);
	else if (current_rank >= max)
		return (1);
	else if (current_rank < min)
		return (-1);
	return (69);
}

void	mega_sort(t_list **stack_a, t_list **stack_b)
{
	long	i;

	i = 1;
	rank_list((*stack_a), ft_lstsize((*stack_a)));
	while ((*stack_a))
	{
		if ((range(i, (*stack_a)->rank)) == 0)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else if ((range(i, (*stack_a)->rank)) == 1)
			ra_rb(stack_a, 'a');
		else if ((range(i, (*stack_a)->rank)) == -1)
		{
			pb(stack_a, stack_b);
			ra_rb(stack_b, 'b');
			i++;
		}
	}
	homecoming(stack_a, stack_b);
}
