#include "push_swap.h"
void ft_push_min_to_b(t_stack **a, t_stack **b)
{
	t_stack *tmp;

	tmp = NULL;
	while (tmp != *a)
	{
		tmp = ft_find_min(a);
		if (tmp->next == *a)
			ft_swap(*a, "sa");
		else if (tmp == (*a)->next->next)
		{
			ft_reverse_rotate(a,"ra");
			ft_swap(*a,"sa");
		}
		else if (tmp->next ==NULL)
			ft_reverse_rotate(a, "rra");
		else if (tmp->next->next == NULL)
			ft_reverse_rotate(a,"ra");
	}
		ft_push(a,b,"pb");
}