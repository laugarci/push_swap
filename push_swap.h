

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

typedef struct s_list
{
	struct s_list	*next;
	struct s_list	*beg;
	int val;
	int index;
}	t_list;

//Preparar stacks
t_list *ft_copy_stack(t_list *stack_a, char **av);
t_list	*ft_lstnew(int val);

//Utils
int	ft_atoi(const char *str);
t_list *ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **stack_a, t_list *new);
t_list	*ft_lstnew(int val);


//Sorting
void	make_sa(t_list *stack_a);
void	make_sb(t_list *stack_b);
void	make_ss(t_list *stack_a, t_list *stack_b);
void	make_pa(t_list *stack_a, t_list *stack_B);
void	make_pb(t_list *stack_b, t_list *stack_a);
void	make_ra(t_list *stack_a);
void	make_rb(t_list *stack_b);
void	make_rr(t_list *stack_a, t_list *stack_b);
void	make_rra(t_list *stack_a);
void	make_rrb(t_list *stack_b);
void	make_rrr(t_list *stack_a, t_list *stack_b);
