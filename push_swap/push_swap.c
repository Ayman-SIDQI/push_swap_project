/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:08:10 by asidqi            #+#    #+#             */
/*   Updated: 2023/03/11 15:45:00 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void	rank_list(t_list *stack, int len)
{
	t_list	*tmp;
	t_list	*tmp2;

	tmp = (stack);
	tmp2 = (stack);
	while (stack)
	{
		(stack)->rank = len;
		(stack) = (stack)->next;
	}
	(stack) = tmp;
	while (tmp != NULL)
	{
		while (tmp2)
		{
			if (tmp->content < tmp2->content)
				tmp->rank--;
			tmp2 = tmp2->next;
		}
		tmp2 = stack;
		tmp = tmp->next;
	}
}

int	ft_ispace(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] == ' ')
		i++;
	if (str[i] == '\0')
		return (1);
	return (0);
}

t_list	*split_numbers(char **av, t_list *all)
{
	int		i;
	int		o;
	char	**check;

	i = 1;
	o = 0;
	check = NULL;
	while (av[i])
	{
		check = ft_split(av[i], ' ');
		while (check[o])
		{
			checksafe(check[o], all, check);
			ft_lstadd_back(&all, ft_lstnew(ft_atoi(check[o])));
			o++;
		}
		free_2d(check);
		o = 0;
		i++;
	}
	checkdouble(all);
	return (all);
}

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
