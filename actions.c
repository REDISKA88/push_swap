#include "push_swap.h"
void	ft_swap(t_stack **ab, char *str)
{
	t_stack	*tmp;

	if (*ab == NULL)
		return ;
	tmp = *ab;
	*ab = (*ab)->next;
	tmp->next = (*ab)->next;
	(*ab)->next = tmp;
	ft_putendl(str);
}

void	ft_push(t_stack **from, t_stack **into, char *str)
{
	t_stack	*tmp;

	if ((*from) == NULL)
		return ;
	tmp = (*from)->next;
	(*from)->next = *into;
	*into = *from;
	*from = tmp;
	ft_putendl(str);
}

void	ft_rotate(t_stack **ab, char *str)
{
	t_stack	*up;
	t_stack	*sec;

	up = (*ab);
	sec = up->next;
	(*ab) = (*ab)->next;
	while (sec->next != NULL)
		sec = sec->next;
	sec->next = up;
	up->next = NULL;
	ft_putendl(str);
}

void	ft_reverse_rotate(t_stack **ab, char *str)
{
	t_stack	*list;
	t_stack	*last;

	list = *ab;
	while (list->next->next != NULL)
		list = list->next;
	last = list->next;
	list->next = NULL;
	last->next = *ab;
	*ab = last;
	ft_putendl(str);
}
