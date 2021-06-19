#include "push_swap.h"
static t_stack	*ft_mini_argv_to_list(int argc, char **argv, t_tool *t)
{
	int		size;
	t_stack	*first;
	t_stack	*temp;

	size = argc;
	first = NULL;
	while (argc >= 0)
	{
		temp = malloc(sizeof (t_stack));
		if (!temp)
			ft_free_all(&first, t, argv, 0);
		temp->data = ft_atoi(argv[argc]);
		temp->pos = argc;
		if (!ft_find_dupl(argc, size, argv))
			ft_free_all(&first, t, argv, 1);
		temp->next = first;
		first = temp;
		argc--;
	}
	return (first);
}

t_stack	*ft_argv_to_list(int argc, char **argv, t_tool *t)
{
	int		size;
	t_stack	*first;
	t_stack	*temp;

	size = argc;
	first = NULL;
	if (!ft_valid(argv, t))
		ft_error("Error", t);
	if (t->str == 1)
		return (ft_mini_argv_to_list(argc, argv, t));
	while (argc)
	{
		temp = malloc(sizeof (t_stack));
		if (!temp)
			ft_free_lists(&first, t, 0);
		temp->data = ft_atoi(argv[argc]);
		temp->pos = argc;
		if (!ft_find_dupl(argc, size, argv))
			ft_free_lists(&first, t, 1);
		temp->next = first;
		first = temp;
		argc--;
	}
	return (first);
}

int	ft_count_list(t_stack *a)
{
	int	i;
	int	pos;

	i = 0;
	pos = 0;
	while (a)
	{
		i++;
		pos++;
		a->pos = pos;
		a = a->next;
	}
	return (i);
}

void	ft_mini_indexing(t_stack **a, int argc, int idx, int dmin)
{
	t_stack	*list;

	list = (*a);
	while (idx <= argc)
	{
		while (list)
		{
			if (list->data == dmin)
			{
				list->index = idx;
				idx++;
				dmin++;
				list = *a;
				continue ;
			}
			list = list->next;
		}
		dmin++;
		list = *a;
	}
}

void	ft_indexing(t_stack **a, int argc)
{
	t_stack	*tmp;
	int		index;
	int		datamin;

	index = 1;
	tmp = ft_find_min(a);
	datamin = tmp->data;
	tmp->index = index;
	index++;
	datamin++;
	ft_mini_indexing(a, argc, index, datamin);
}
