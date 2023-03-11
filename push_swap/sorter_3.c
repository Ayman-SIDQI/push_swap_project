/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorter_3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 22:05:37 by asidqi            #+#    #+#             */
/*   Updated: 2023/03/10 22:06:57 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

short	range_500(int min, int current_rank)
{
	int	max;

	max = min + 35;
	if (current_rank >= min && current_rank < max)
		return (0);
	else if (current_rank >= max)
		return (1);
	else if (current_rank < min)
		return (-1);
	return (69);
}

void	ultra_sort(t_list **stack_a, t_list **stack_b)
{
	long	i;

	i = 1;
	rank_list((*stack_a), ft_lstsize((*stack_a)));
	while ((*stack_a))
	{
		if ((range_500(i, (*stack_a)->rank)) == 0)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else if ((range_500(i, (*stack_a)->rank)) == 1)
			ra_rb(stack_a, 'a');
		else if ((range_500(i, (*stack_a)->rank)) == -1)
		{
			pb(stack_a, stack_b);
			ra_rb(stack_b, 'b');
			i++;
		}
	}
	homecoming(stack_a, stack_b);
}
