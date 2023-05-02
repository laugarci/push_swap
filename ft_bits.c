/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bits.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 07:47:39 by laugarci          #+#    #+#             */
/*   Updated: 2023/05/02 16:39:18 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_count_nodes(t_list *stack_a)
{
	int i;
	t_list *aux;

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
	int	bit;
	int	i;
	int	count;
	t_list	*aux;
	int movs = 0;
	int nums = 0;

	aux = stack_a;
	i = 0;
	bit = 1;
	count = ft_count_nodes(stack_a);
	while ((ft_stack_is_sort(stack_a, count)) != 1)
	{			
		count = ft_count_nodes(stack_a);
		while (count != 0 && aux != NULL)
		{
			if (aux->index & bit)
			{
				write(1, "ra\n", 3);
				make_ra(&stack_a);
				aux = stack_a;
				movs++;
			}
			else
			{
				write(1, "pb\n", 3);
				make_pb(&stack_b, &stack_a);	
				aux = stack_a;
				i++;
				movs++;
			}
			count--;
		}
		while (i != 0)
		{
			make_pa(&stack_a, &stack_b);
			write(1, "pa\n", 3);
			i--;
			movs++;
		}
		aux = stack_a;
		bit = bit << 1;
	}
	aux = stack_a;
	printf("Movements: %d", movs);
/*	printf("stack_a\n"); */
	while (aux != NULL)
	{
		aux = aux->next;
		nums++;
	}
	printf("\n");
	printf("cantidad de numeros: %d\n", nums);
	return (stack_a);
}
