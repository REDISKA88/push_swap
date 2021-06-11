#include "push_swap.h"
#include "stdio.h"
void ft_continue_iii(t_stack **a)
{
	t_stack *top;
	t_stack *sec;
	t_stack *lst;

	top = (*a);
	sec = (*a)->next;
	lst = (*a)->next->next;
	if (top->data < sec->data && sec->data > lst->data && lst->data > top->data)
	{
		ft_swap(*a);
		ft_rotate(a);
		write(1,"sa\n",3);
		write(1,"ra\n",3);
	}
	if (top->data < sec->data && sec->data > lst->data && lst->data < top->data)
	{
		ft_reverse_rotate(a);
		write(1,"rra\n",4);
	}
}

void ft_case_iii(t_stack **a)
{
	t_stack *top;
	t_stack *sec;
	t_stack *lst;

	top = (*a);
	sec = (*a)->next;
	lst = (*a)->next->next;
	if (top->data > sec->data && sec->data < lst->data && lst->data > top->data)
	{
		ft_swap(*a);
		write(1,"sa\n",3);

	}
	if (top->data > sec->data && sec->data > lst->data && lst->data < top->data)
	{
		ft_swap(*a);
		ft_reverse_rotate(a);
		write(1,"sa\n",3);
		write(1,"rra\n",4);
	}
	if (top->data > sec->data && sec->data < lst->data && lst->data < top->data)
	{
		ft_rotate(a);
		write(1,"ra\n",3);
	}
	else
		ft_continue_iii(a);
}

void ft_sort(t_stack **a, t_stack **b, int size)
{
	(void) b;
	if (size == 3)
		ft_case_iii(a);

}