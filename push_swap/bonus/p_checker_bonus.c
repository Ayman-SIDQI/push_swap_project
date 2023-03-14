/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p_checker_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:19:28 by asidqi            #+#    #+#             */
/*   Updated: 2023/03/14 16:36:05 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"../push_swap.h"

void	checker_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*bbody;

	if (!(*stack_b))
		return ;
	tmp = (*stack_b);
	if (ft_lstsize(*stack_b) == 1)
	{
		(*stack_b)->next = (*stack_a);
		(*stack_a) = tmp;
		(*stack_b) = NULL;
		return ;
	}
	bbody = (*stack_b)->next;
	(*stack_b)->next = (*stack_a);
	(*stack_a) = tmp;
	(*stack_b) = bbody;
}

void	checker_pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!(*stack_a))
		return ;
	tmp = (*stack_a);
	if (ft_lstsize(*stack_a) == 1)
	{
		(*stack_a)->next = (*stack_b);
		(*stack_b) = tmp;
		(*stack_a) = NULL;
		return ;
	}
	(*stack_a) = (*stack_a)->next;
	tmp->next = (*stack_b);
	(*stack_b) = tmp;
}
