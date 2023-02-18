#include <stdio.h>
#include <unistd.h>

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

void	ft_check_arg(char **str)
{
	int i;

	i = 1;
	while (str[i])
	{
		if (str[i])
	}
}

int main(int ac, char **av)
{
	int count;

	count = ft_count_nums(av);
	ft_check_arg(av);
	//ft_crate_stack(count, av); //guardar todos los numeros en stack
}
