/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   index.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:54:55 by laugarci          #+#    #+#             */
/*   Updated: 2023/04/25 17:11:06 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_index(t_list *stack_a, int count)
{
	//crear una lista auxiliar
	//recorro toda la lista
	//recorro todos los numeros
	//mira si esta ordenado
	//si no esta ordenado, vuelve
	int i = INT_MIN;
	int index = 0;

	while (i < INT_MAX)
	{
		while (stack_a->next != NULL)
		{
			if (stack_a->val == INT_MIN)
			{
				stack_a->index = 0;
			}
		}
		i++;
	}
	if (ft_stack_is_sort(stack_a, count) == 0)
	{
		printf("recursividad aqui");
	}
}
