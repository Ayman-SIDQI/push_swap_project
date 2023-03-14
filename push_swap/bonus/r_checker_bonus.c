/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r_checker_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:30:40 by asidqi            #+#    #+#             */
/*   Updated: 2023/03/14 14:40:40 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	checker_ra_rb(t_list **stack_a, char letter)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (ft_lstsize(*stack_a) <= 1)
		return ;
	tmp = (*stack_a);
	tmp1 = (*stack_a)->next;
	(*stack_a) = tmp1;
	ft_lstlast(*stack_a)->next = tmp;
	tmp->next = NULL;
	if (letter == 'a')
		ft_putstr_fd("ra\n", 1);
	else if (letter == 'b')
		ft_putstr_fd("rb\n", 1);
}

void	checker_rr(t_list **stack_a, t_list **stack_b)
{
	checker_ra_rb(stack_a, 'X');
	checker_ra_rb(stack_b, 'X');
}

void	checker_rra_rrb(t_list **stack_a, char letter)
{
	t_list	*tmp;
	t_list	*tmp1;

	if (ft_lstsize(*stack_a) <= 1)
		return ;
	tmp1 = (*stack_a);
	while ((*stack_a)->next != NULL)
	{
		if ((*stack_a)->next->next == NULL)
			tmp = ((*stack_a));
		*stack_a = (*stack_a)->next;
	}
	(*stack_a)->next = tmp1;
	(tmp)->next = NULL;
	if (letter == 'a')
		ft_putstr_fd("rra\n", 1);
	else if (letter == 'b')
		ft_putstr_fd("rrb\n", 1);
}

void	checker_rrr(t_list **stack_a, t_list **stack_b)
{
	checker_rra_rrb(stack_a, 'X');
	checker_rra_rrb(stack_b, 'X');
}
