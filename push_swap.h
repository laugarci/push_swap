/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:30:50 by laugarci          #+#    #+#             */
/*   Updated: 2023/05/10 09:55:43 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>

typedef struct s_list
{
	struct s_list		*next;
	int			val;
	int			index;
}				t_list;

//Checks
int		ft_check_nums(char **str);
int		check_dup(t_list *stack_a);
int		check_spaces(char *str);

//Preparar stacks
t_list		*ft_copy_stack(t_list *stack_a, char **av);
t_list		*ft_lstnew(int val);

//Utils
int		ft_atol(const char *str);
t_list		*ft_lstlast(t_list *lst);
void		ft_lstadd_back(t_list **stack_a, t_list *new);
t_list		*ft_lstnew(int val);
int		ft_stack_is_sort(t_list *stack_a, int count);
int		find_max_num(t_list *stack_a);
int		find_min_num(t_list *stack_a);
int		ft_strlen(char *str);
void		ft_free(t_list **stack);

//Index
t_list		*ft_index(t_list *stack_a, int count);
int		index_is_sort(t_list *stack_a, int count);
t_list		*ft_init_index(t_list *stack_a);
int		ft_find_index(t_list *stack_a);

//Order stacks
t_list		*ft_index_order(t_list *stack_a, t_list *stack_b);
int		ft_count_nodes(t_list *stack_a);

void		ft_lstadd_front(t_list **lst, t_list *new);
t_list		*sort_four(t_list *stack_a, t_list *stack_b, int count);
t_list		*sort_three(t_list *stack_a);
t_list		*sort_five(t_list *stack_a, t_list *stack_b, int count);

//Sorting operationst
void		make_sa(t_list **stack_a);
void		make_sb(t_list **stack_b);
void		make_ss(t_list **stack_a, t_list **stack_b);
void		make_pa(t_list **stack_a, t_list **stack_b);
void		make_pb(t_list **stack_b, t_list **stack_a);
void		make_ra(t_list **stack_a);
void		make_rb(t_list **stack_b);
void		make_rr(t_list **stack_a, t_list **stack_b);
void		make_rra(t_list **stack_a);
void		make_rrb(t_list **stack_b);
void		make_rrr(t_list **stack_a, t_list **stack_b);

//Sort small stack
t_list		*sort_small_stack(t_list *stack_a, t_list *stack_b, int count);

#endif
