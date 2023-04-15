/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:48:32 by laugarci          #+#    #+#             */
/*   Updated: 2023/04/15 18:19:33 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "./lib/libft.h"

typedef struct s_stack
{
	struct s_stack	*next;
	int	val;
	int	index;
}	t_list;


void	ft_check_arg(char **str);
int		ft_count_nums(char **str);
//int		ft_stack_is_sort(t_stack *stack_a);
void	ft_copy_stack(t_list **stack_a, char **av);
t_list *ft_lstnew(int val);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
