/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_is_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 13:47:28 by laugarci          #+#    #+#             */
/*   Updated: 2023/02/24 14:12:03 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_stack_is_sort(t_stack *stack_a)
{
	int i;

	i = 0;
	while (stack_a->A[i])
	{
		if (stack_a->A[i + 1] == '\0')
			break ;
		if (stack_a->A[i + 1] == stack_a->A[i] + 1)
			i++;
		else
			return(1);
	}
	return (0);	
}
