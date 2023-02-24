/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 14:48:32 by laugarci          #+#    #+#             */
/*   Updated: 2023/02/24 14:00:58 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include "./libft/libft.h"

typedef struct s_stack
{
	int *A;
	struct s_stack	*next;
}	t_stack;


void	ft_check_arg(t_stack *stack_a, char **str, int count);
int		ft_count_nums(char **str);
int		ft_stack_is_sort(t_stack *stack_a);
