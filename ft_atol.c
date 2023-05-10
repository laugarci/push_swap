/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laugarci <laugarci@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/29 13:03:39 by laugarci          #+#    #+#             */
/*   Updated: 2023/05/10 12:54:04 by laugarci         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atol(const char *str)
{
	int		i;
	long	j;
	int		flag;

	i = 0;
	j = 0;
	flag = 1;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			flag = flag * -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		j = j * 10;
		j = j + str[i] - 48;
		i++;
	}
	if (j * flag > INT_MAX || j * flag < INT_MIN)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (j * flag);
}
