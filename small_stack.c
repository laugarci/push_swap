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

void	sort_small_stack(t_list *stack_a, t_list *stack_b, int count)
{
	if (count == 2)
	{
		if (stack_a->val > stack_a->next->val)
		{
			make_sa(&stack_a);
			write(1, "sa\n", 3);
		}
	}
	else if (count == 3)
	{
		if (stack_a->val > stack_a->next->val)
		{
			if (stack_a->val > stack_a->next->next->val)
			{
				if (stack_a->next->val > stack_a->next->next->val)
				{
					make_sa(&stack_a);
					make_rra(&stack_a);
					write(1, "sa\n", 3);
					write(1, "rra\n", 4);
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
				make_rra(&stack_a);
				make_sa(&stack_a);
				write(1, "rra\n", 4);
				write(1, "sa\n", 3);
			}
			else
			{
				make_rra(&stack_a);
				write(1, "rra\n", 4);
			}
		}
	}		
}
