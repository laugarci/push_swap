/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:00:52 by laugarci          #+#    #+#             */
/*   Updated: 2023/02/24 14:12:34 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int ft_count_nums(char **str)
{
	int i;
	int j;
	int nums;

	i = 1;
	j = 0;
	nums = 0;

	while(str[i])
	{
		if (str[i][j] != '\0')
			j++;
		nums++;
		i++;
	}
	return (nums);
}

void	ft_check_arg(t_stack *stack_a, char **str, int count)
{
	int i;
	int j;
	int aux;

	i = 1;
	j = 0;
	stack_a->A = malloc(sizeof(int *) * count + 1);
	while (str[i])
	{
		if ((aux = ft_atoi(str[i])) == 0 || (ft_isalpha(aux) == 1))
		{
			write(1, "Error\n", 6);
			return ;
		}
		stack_a->A[j] = aux;
		j++;
		i++;
	}
}

int main(int ac, char **av)
{
	int count;
	t_stack stack_a;
	t_stack stack_b;	

	count = ft_count_nums(av);
	ft_check_arg(&stack_a, av, count);
	if ((ft_stack_is_sort(&stack_a)) == 0)
		return (*stack_a.A);
}
