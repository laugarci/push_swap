/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_operations.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:09:36 by laugarci          #+#    #+#             */
/*   Updated: 2023/05/02 15:18:02 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	make_sa(t_list **stack_a)
{
	t_list		*first;
	t_list		*second;
	int		temp;

	if (*stack_a == NULL || (*stack_a)->next == NULL)
		return ;
	first = *stack_a;
	second = (*stack_a)->next;
	temp = first->val;
	first->val = second->val;
	second->val = temp;
	first->next = second;
	*stack_a = first;
}

void	make_sb(t_list **stack_b)
{
	t_list	*first;
	t_list	*second;
	int		temp;

	if (*stack_b == NULL || (*stack_b)->next == NULL)
		return ;
	first = *stack_b;
	second = (*stack_b)->next;
	temp = first->val;
	first->val = second->val;
	second->val = temp;
	first->next = second;
	*stack_b = first;
}

void	make_pa(t_list **stack_a, t_list **stack_b)
{
	t_list	*first_node_b;

	if (*stack_b != NULL)
	{
		first_node_b = *stack_b;
		*stack_b = first_node_b->next;
		if (*stack_a == NULL)
		{
			*stack_a = first_node_b;
			first_node_b->next = NULL;
		}
		else
		{
			first_node_b->next = *stack_a;
			*stack_a = first_node_b;
		}
	}
}

void	make_pb(t_list	**stack_b, t_list **stack_a)
{
	t_list	*first_node_a;

	if (*stack_a != NULL)
	{
		first_node_a = *stack_a;
		*stack_a = first_node_a->next;
		if (*stack_b == NULL)
		{
			*stack_b = first_node_a;
			first_node_a->next = NULL;
		}
		else
		{
			first_node_a->next = *stack_b;
			*stack_b = first_node_a;
		}
	}
}

void	make_ra(t_list **stack_a)
{
	t_list	*current;

	if (*stack_a != NULL && (*stack_a)->next != NULL)
	{
		current = *stack_a;
		while (current->next != NULL)
			current = current->next;
		current->next = *stack_a;
		*stack_a = (*stack_a)->next;
		current->next->next = NULL;
	}
}
