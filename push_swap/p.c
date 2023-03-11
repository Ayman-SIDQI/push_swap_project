/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   p.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:19:28 by asidqi            #+#    #+#             */
/*   Updated: 2023/03/10 16:13:03 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;
	t_list	*bbody;

	tmp = (*stack_b);
	if (ft_lstsize(*stack_b) == 1)
	{
		(*stack_b)->next = (*stack_a);
		(*stack_a) = tmp;
		(*stack_b) = NULL;
		ft_putstr_fd("pa\n", 1);
		return ;
	}
	bbody = (*stack_b)->next;
	(*stack_b)->next = (*stack_a);
	(*stack_a) = tmp;
	(*stack_b) = bbody;
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	tmp = (*stack_a);
	if (ft_lstsize(*stack_a) == 1)
	{
		(*stack_a)->next = (*stack_b);
		(*stack_b) = tmp;
		(*stack_a) = NULL;
		ft_putstr_fd("pb\n", 1);
		return ;
	}
	(*stack_a) = (*stack_a)->next;
	tmp->next = (*stack_b);
	(*stack_b) = tmp;
	ft_putstr_fd("pb\n", 1);
}
