
#include "push_swap.h"

void	sort_small_stack(t_list *stack_a, t_list *stack_b, int count)
{
	if (count == 2)
	{
		if (stack_a->val > stack_a->next->val)
		{
			make_sa(&stack_a);
			write(1, "sa\n", 3);
		}
	}
	else if (count == 3)
	{
		if (stack_a->val > stack_a->next->val) //3 1 2, 3 2 1, 2 1 3
			{
				if (stack_a->val > stack_a->next->next->val) //casos 3
				{
					if (stack_a->next->val > stack_a->next->next->val) //3 2 1
					{
						make_sa(&stack_a);
						make_rra(&stack_a);
						write(1, "sa\n", 3);
						write(1, "rra\n", 4);
					}
					else if (stack_a->next->val < stack_a->next->next->val) //3 1 2
					{
						make_ra(&stack_a);
						write(1, "ra\n", 3);
					}
				}
				else //2 1 3
					{
						make_rra(&stack_a);
						write(1, "sa\n", 3);
					}
			}
		if (stack_a->next->val > stack_a->val && stack_a->next->val > stack_a->next->next->val)
		{
			if (stack_a->val < stack_a->next->next->val)
			{
				make_rra(&stack_a);
				make_sa(&stack_a);
				write(1, "rra\n", 4);
				write(1, "sa\n", 3);
				printf("%d\n", stack_a->val);
			}
			else
			{
				make_rra(&stack_a);
				write(1, "rra\n", 4);
			}
		}
	}		
}
