/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bits.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 07:47:39 by laugarci          #+#    #+#             */
/*   Updated: 2023/04/27 08:04:00 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index_order(t_list *stack_a, t_list *stack_b)
{
	int bit;

	bit = 1;
	while (stack_a != NULL)
	{
		if (stack_a->index & bit)
		{
			make_pb(&stack_a, &stack_b);
		}
		stack_a = stack_a->next;
	}
}
