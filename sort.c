#include "push_swap.h"
void	ft_continue_iii(t_stack **a)
{
	t_stack	*top;
	t_stack	*sec;
	t_stack	*lst;

	top = (*a);
	sec = (*a)->next;
	lst = (*a)->next->next;
	if (top->data < sec->data && sec->data > lst->data && lst->data > top->data)
	{
		ft_swap(a, "sa");
		ft_rotate(a, "ra");
	}
	if (top->data < sec->data && sec->data > lst->data && lst->data < top->data)
		ft_reverse_rotate(a, "rra");
}

void	ft_case_iii(t_stack **a)
{
	t_stack	*top;
	t_stack	*sec;
	t_stack	*lst;

	top = (*a);
	sec = (*a)->next;
	lst = (*a)->next->next;
	if (top->data > sec->data && sec->data < lst->data && lst->data > top->data)
		ft_swap(a, "sa");
	if (top->data > sec->data && sec->data > lst->data && lst->data < top->data)
	{
		ft_swap(a, "sa");
		ft_reverse_rotate(a, "rra");
	}
	if (top->data > sec->data && sec->data < lst->data && lst->data < top->data)
		ft_rotate(a, "ra");
	else
		ft_continue_iii(a);
}

void	ft_case_iv(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	tmp = NULL;
	while (tmp != *a)
	{
		tmp = ft_find_min(a);
		if (tmp == (*a)->next)
			ft_swap(a, "sa");
		if (tmp == (*a)->next->next)
			ft_reverse_rotate(a, "rra");
		if (tmp->next == NULL)
			ft_reverse_rotate(a, "rra");
	}
	ft_push(a, b, "pb");
}

void	ft_case_v(t_stack **a, t_stack **b)
{
	t_stack	*tmp;

	ft_push_min_to_b(a, b);
	ft_case_iv(a, b);
	ft_case_iii(a);
	tmp = ft_find_min(b);
	if (tmp == *b)
		ft_push(b, a, "pa");
	else
	{
		ft_push(b, a, "pa");
		ft_push(b, a, "pa");
	}
}

void	ft_sort(t_stack **a, t_stack **b, int size, t_tool *t)
{
	if (!ft_check_sorting(*a))
		exit(1);
	if (size == 2)
		ft_swap(a, "sa");
	if (size == 3)
		ft_case_iii(a);
	if (size == 4)
	{
		ft_case_iv(a, b);
		ft_case_iii(a);
		if (b != NULL)
			ft_push(b, a, "pa");
	}
	if (size == 5)
		ft_case_v(a, b);
	if (size > 5 && size <= 100)
		ft_mid_sort(a, b, 20, t);
	if (size > 100)
		ft_big_sort(a, b, 40, t);
}
