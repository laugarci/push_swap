/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bits.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 07:47:39 by laugarci          #+#    #+#             */
/*   Updated: 2023/04/27 17:05:14 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index_order(t_list *stack_a, t_list *stack_b)
{
	int bit;
	int	i;
	
	i = 0;
	bit = 1;
	while (stack_a != NULL)
	{
		if (stack_a->index & 1)
			make_pb(&stack_b, &stack_a);
		stack_a = stack_a->next;
	}
	write(1, "sale\n", 5);
//	printf("%d\n", stack_b->val);
//	printf("%d\n", stack_b->next->val);
//	printf("%d\n", stack_b->next->next->val);
}
