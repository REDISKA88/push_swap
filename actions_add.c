#include "push_swap.h"
void	ft_swap_swap(t_stack **a, t_stack **b)
{
	ft_swap(a, "ss");
	ft_swap(b, "ss");
	write(1, "ss\n", 3);
}

void	ft_rotate_rotate(t_stack **a, t_stack **b)
{
	ft_rotate(a, "rr");
	ft_rotate(b, "rr");
	write(1, "rr\n", 3);
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	ft_reverse_rotate(a, "rrr");
	ft_reverse_rotate(b, "rrr");
	write(1, "rrr\n", 4);
}

void	ft_push_last(t_stack **from, t_stack **into, char *str)
{
	t_stack	*tmp;
	t_stack	*new_into;

	tmp = NULL;
	new_into = *from;
	new_into->next = *into;
	*from = tmp;
	ft_putendl(str);
}
