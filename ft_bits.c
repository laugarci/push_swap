/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bits.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 07:47:39 by laugarci          #+#    #+#             */
/*   Updated: 2023/05/16 18:02:22 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_count_nodes(t_list *stack_a)
{
	int		i;
	t_list	*aux;

	aux = stack_a;
	i = 0;
	while (aux != NULL)
	{
		aux = aux->next;
		i++;
	}
	return (i);
}

t_list	*ft_index_order(t_list *stack_a, t_list *stack_b)
{
	int		bit;
	int		i;
	int		count;
	t_list	*aux;

	aux = stack_a;
	i = 0;
	bit = 1;
	count = ft_count_nodes(stack_a);
	while ((ft_stack_is_sort(stack_a)) != 1)
	{			
		count = ft_count_nodes(stack_a);
		while (count != 0 && aux != NULL)
		{
			if (aux->index & bit)
				make_ra(&stack_a);
			else
			{
				make_pb(&stack_b, &stack_a);
				i++;
			}
			aux = stack_a;
			count--;
		}
		while (i != 0)
		{
			make_pa(&stack_a, &stack_b);
			i--;
		}
		aux = stack_a;
		bit = bit << 1;
	}
	return (stack_a);
}
