/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asidqi <asidqi@student.1337.ma>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/12 21:09:09 by asidqi            #+#    #+#             */
/*   Updated: 2023/03/14 16:15:56 by asidqi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include<stdio.h>
# include<stdlib.h>
# include<unistd.h>
# include "bonus/get_next_line.h"

typedef struct s_list
{
	int				content;
	int				rank;
	struct s_list	*next;
}t_list;

void	ft_lstclear(t_list **lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstadd_back(t_list **lst, t_list *new);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_atoi(const char *str);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int value);
int		ft_iszerostring(char *c);
int		ft_isdigit(char *c);
char	*ft_itoa(int n);
void	ft_putstr_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
char	**ft_split(char const *so, char dm);
char	*ft_substr(char const *s, int start, int len);
char	*ft_strdup(const char *s1);
int		ft_strlen2(const char *s);
void	*ft_calloc(int count, int size);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *b, int c, size_t len);
int		ft_strcmp1(char *s1, char *s2);
int		ft_ispace(char *str);
int		ft_lstsize(t_list *lst);
void	rank_list(t_list *stack, int len);
/****************************libft*************************************/
t_list	*split_numbers(char **av, t_list *all);
void	checksafe(char *str, t_list *all, char **whole);
void	checkdouble(t_list *all);
void	free_2d(char **bagage);
void	sa(t_list **root, char f);
void	sb(t_list **root, char f);
void	ss(t_list **stack_a, t_list **stack_b);
void	pa(t_list **stack_a, t_list **stack_b);
void	pb(t_list **stack_a, t_list **stack_b);
void	ra_rb(t_list **stack_a, char letter);
void	rr(t_list **stack_a, t_list **stack_b);
void	rra_rrb(t_list **stack_a, char letter);
void	rrr(t_list **stack_a, t_list **stack_b);
void	sort_two(t_list **stack_a);
void	sort_three(t_list **stack_a);
void	sort_four(t_list **stack_a, t_list **stack_b);
int		find_min(t_list *stack);
int		find_max(t_list *stack);
int		check_sort(t_list *stack);
void	sort_five(t_list **stack_a, t_list **stack_b);
void	clear_free(t_list **stack_a, t_list **stack_b, char **bagage);
void	homecoming(t_list **stack_a, t_list **stack_b);
short	range(int min, int current_rank);
void	mega_sort(t_list **stack_a, t_list **stack_b);
void	ultra_sort(t_list **stack_a, t_list **stack_b);
void	checker_sa(t_list **root, char f);
void	checker_sb(t_list **root, char f);
void	checker_ss(t_list **stack_a, t_list **stack_b);
void	checker_pa(t_list **stack_a, t_list **stack_b);
void	checker_pb(t_list **stack_a, t_list **stack_b);
void	checker_ra_rb(t_list **stack_a, char letter);
void	checker_rr(t_list **stack_a, t_list **stack_b);
void	checker_rra_rrb(t_list **stack_a, char letter);
void	checker_rrr(t_list **stack_a, t_list **stack_b);

#endif