/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:09:52 by laugarci          #+#    #+#             */
/*   Updated: 2023/05/15 17:40:48 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*sort_five(t_list *stack_a, t_list *stack_b)
{
	while (stack_a->index != 0)
	{
		if (stack_a->next->index == 0)
			make_ra(&stack_a);
		else
			make_rra(&stack_a);
	}
	if ((ft_stack_is_sort(stack_a) != 1))
	{
		make_pb(&stack_b, &stack_a);
		if (stack_a->next->index == 1)
			make_sa(&stack_a);
		else
		{
			while (stack_a->index != 1)
				make_rra(&stack_a);
		}
		make_pb(&stack_b, &stack_a);
		stack_a = sort_three(stack_a);
		make_pa(&stack_a, &stack_b);
		make_pa(&stack_a, &stack_b);
	}
	return (stack_a);
}

t_list	*sort_four(t_list *stack_a, t_list *stack_b)
{
	while (stack_a->index != 0)
		make_rra(&stack_a);
	make_pb(&stack_b, &stack_a);
	stack_a = sort_three(stack_a);
	make_pa(&stack_a, &stack_b);
	return (stack_a);
}

t_list	*sort_three_aux(t_list *stack_a)
{
	make_ra(&stack_a);
	make_sa(&stack_a);
	return (stack_a);
}

t_list	*sort_three_aux_two(t_list *stack_a)
{
	make_sa(&stack_a);
	make_ra(&stack_a);
	make_sa(&stack_a);
	return (stack_a);
}

t_list	*sort_three(t_list *stack_a)
{
	if (stack_a->val > stack_a->next->val)
	{
		if (stack_a->val > stack_a->next->next->val)
		{
			if (stack_a->next->val > stack_a->next->next->val)
				stack_a = sort_three_aux(stack_a);
			else if (stack_a->next->val < stack_a->next->next->val)
				make_ra(&stack_a);
		}
		else
			make_sa(&stack_a);
	}
	if (stack_a->next->val > stack_a->val
		&& stack_a->next->val > stack_a->next->next->val)
	{
		if (stack_a->val < stack_a->next->next->val)
		{
			make_sa(&stack_a);
			make_ra(&stack_a);
		}
		else
			stack_a = sort_three_aux_two(stack_a);
	}
	return (stack_a);
}

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
