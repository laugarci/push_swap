/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:09:52 by laugarci          #+#    #+#             */
/*   Updated: 2023/04/24 18:17:35 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_list *stack_a, t_list *stack_b, int count)
{

	while ((ft_stack_is_sort(stack_a, count) != 1))
	{
		while (stack_a->index != 0)
		{
			if (stack_a->next->index == 0)
			{
				make_ra(&stack_a);
				write(1, "ra\n", 3);
			}
			else
			{
				make_rra(&stack_a);
				write(1, "rra\n", 4);
			}
		}
		if ((ft_stack_is_sort(stack_a, count) != 1))
		{
			make_pb(&stack_b, &stack_a);
			write(1, "pb\n", 3);
			while (stack_a->index != 1)
			{
				make_rra(&stack_a);
				write(1, "rra\n", 4);
			}
			make_pb(&stack_b, &stack_a);
			write(1, "pb\n", 3);
			sort_three(stack_a);
			make_pa(&stack_a, &stack_b);
			write(1, "pa\n", 3);
			make_pa(&stack_a, &stack_b);
			write(1, "pa\n", 3);
		}
	}
}

void	sort_four(t_list *stack_a, t_list *stack_b, int count)
{
	while ((ft_stack_is_sort(stack_a, count) != 1))
	{
		while (stack_a->index != 0)
		{
			make_rra(&stack_a);
			write(1, "rra\n", 4);
		}
		make_pb(&stack_b, &stack_a);
		write(1, "pb\n", 3);
		sort_three(stack_a);
		make_pa(&stack_a, &stack_b);
		write(1, "pa\n", 3);
	}
}


void	sort_three(t_list *stack_a)
{
	if (stack_a->val > stack_a->next->val)
	{
		if (stack_a->val > stack_a->next->next->val)
		{
			if (stack_a->next->val > stack_a->next->next->val)
			{
				make_ra(&stack_a);
				make_sa(&stack_a);
				write(1, "ra\n", 3);
				write(1, "sa\n", 3);
			}
			else if (stack_a->next->val < stack_a->next->next->val)
			{
				make_ra(&stack_a);
				write(1, "ra\n", 3);
			}
		}
		else
		{
			make_sa(&stack_a);
			write(1, "sa\n", 3);
		}
	}
	if (stack_a->next->val > stack_a->val
			&& stack_a->next->val > stack_a->next->next->val)
	{
		if (stack_a->val < stack_a->next->next->val)
		{
			make_sa(&stack_a);
			make_ra(&stack_a);
			write(1, "sa\n", 3);
			write(1, "ra\n", 3);
		}
		else
		{
			make_sa(&stack_a);
			make_ra(&stack_a);
			make_sa(&stack_a);
			write(1, "sa\n", 3);
			write(1, "ra\n", 3);
			write(1, "sa\n", 3);
		}
	}
}

void	sort_small_stack(t_list *stack_a, t_list *stack_b, int count)
{
	if (count == 2)
	{
		make_sa(&stack_a);
		write(1, "sa\n", 3);
	}
	else if (count == 3)
		sort_three(stack_a);
	else if (count == 4)
		sort_four(stack_a, stack_b, count);
	else if (count == 5)
		sort_five(stack_a, stack_b, count);
}
