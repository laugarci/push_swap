
#include "push_swap.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list *aux;

	aux = lst;
	while (aux->next)
	{
		aux = aux->next;
		if (aux->next == NULL)
			return (aux);
	}
	return (aux);
}

void	ft_lstadd_back(t_list **stack_a, t_list *new)
{
	t_list *last;
	
	if (!new)
		 return ;
	if (!*stack_a)
		*stack_a = new;
	else
	{
		last = ft_lstlast(*stack_a);
		last->next = new;
	}
}


t_list	*ft_lstnew(int val)
{
	t_list	*new;
	
	new = (t_list *)malloc(sizeof(*new));
	if (!new)
		return (NULL);
	new->val = val;
	new->next = NULL;
	return (new);
}
