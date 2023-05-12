/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operations_2.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:24:58 by laugarci          #+#    #+#             */
/*   Updated: 2023/04/24 16:29:03 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_rb(t_list **stack_b)
{
	t_list *current;
	if (*stack_b != NULL && (*stack_b)->next != NULL)
	{
		current = *stack_b;
		while (current->next != NULL)
			current = current->next;
		current->next = *stack_b;
		*stack_b = (*stack_b)->next;
		current->next->next = NULL;
	}
}

void	make_rra(t_list **stack_a)
{
	t_list *current;   
       	t_list *prev;

	current = *stack_a;
	prev = NULL;
	if (current == NULL || current->next== NULL)
		return;
	while (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	current->next = *stack_a;
	*stack_a = current;
	prev->next = NULL;
}

void	make_rrb(t_list **stack_b)
{
	t_list	*current;
	t_list	*prev;

	current = *stack_b;
	prev = NULL;
	if (current->next != NULL)
	{
		prev = current;
		current = current->next;
	}
	current->next = *stack_b;
	*stack_b = current;
	prev->next = NULL;
}
