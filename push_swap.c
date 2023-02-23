/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 15:00:52 by laugarci          #+#    #+#             */
/*   Updated: 2023/02/23 17:07:22 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "push_swap.h"
#include "ft_atoi.c"

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

void	ft_is_num(char *num)
{

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
		if ((str[i][j] >= '0' && str[i][j] <= '9') || str[i][j] == ' ')
		{
			printf("entra");
			aux = ft_atoi(str[i]);
			stack_a->A[j] = aux;
			i++;
			j++;
		}
		else
		{
			printf("%c\n", str[i][j]);
			write(1, "Error\n", 6);
			return ;
		}
	}
	stack_a->A[i] = '\0';
	printf("%i\n", stack_a->A[0]);
}

int main(int ac, char **av)
{
	int count;
	t_stack stack_a; 

	count = ft_count_nums(av);
	ft_check_arg(&stack_a, av, count);
	//ft_crate_stack(count, av); //guardar todos los numeros en stack
}
