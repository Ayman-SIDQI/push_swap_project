/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:08:10 by asidqi            #+#    #+#             */
/*   Updated: 2023/03/12 14:25:37 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

int	main(int ac, char **av)
{
	t_list	*all;
	t_list	*ball;

	all = NULL;
	ball = NULL;
	if (ac < 2)
		return (0);
	all = split_numbers(av, all);
	rank_list(all, ft_lstsize(all));
	if (ft_lstsize(all) == 2 && !check_sort(all))
		sort_two(&all);
	else if (ft_lstsize(all) == 3 && !check_sort(all))
		sort_three(&all);
	else if (ft_lstsize(all) == 4 && !check_sort(all))
		sort_four(&all, &ball);
	else if (ft_lstsize(all) == 5 && !check_sort(all))
		sort_five(&all, &ball);
	else if (ft_lstsize(all) <= 100 && !check_sort(all))
		mega_sort(&all, &ball);
	else if (ft_lstsize(all) > 100 && !check_sort(all))
		ultra_sort(&all, &ball);
	ft_lstclear(&all);
	return (0);
}
