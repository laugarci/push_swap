/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack_aux.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 17:07:49 by laugarci          #+#    #+#             */
/*   Updated: 2023/05/17 17:08:40 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*sort_small_stack(t_list *stack_a, t_list *stack_b, int count)
{
	if (count == 2)
		make_sa(&stack_a);
	else if (count == 3)
		stack_a = sort_three(stack_a);
	else if (count == 4)
		stack_a = sort_four(stack_a, stack_b);
	else if (count == 5)
		stack_a = sort_five(stack_a, stack_b);
	return (stack_a);
}
