#include "push_swap.h"
#include "stdio.h"
t_stack *ft_argv_to_list(int argc, char **argv)
{
	int	size;
	t_stack *first;
	t_stack *temp;

	size = argc;
	first = NULL;
	while (argc)
	{
		temp = malloc(sizeof (t_stack));
		if (!temp)
			return (NULL);
		temp->data = ft_atoi(argv[argc]);
		temp->pos = argc;
		if (!ft_find_dupl(argc, size, argv))
		{
			printf("We have a duple!\n");
			free (temp);
			return (NULL);
		}
		temp->next = first;
		first = temp;
		argc--;
	}
	return (first);
}

int ft_count_list(t_stack *a)
{
	int i;
	int pos;

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

void ft_mini_indexing(t_stack **a, t_stack *ls, int argc, int idx, int datamin)
{
	while (idx <= argc)
	{
		while (ls)
		{
			if (ls->data == datamin)
			{
				ls->index = idx;
				idx++;
				datamin++;
				ls = *a;
				continue;
			}
			ls = ls->next;
		}
		datamin++;
		ls = *a;
	}
}
void ft_indexing(t_stack **a, int argc)
{
	int index;
	int datamin;
	t_stack *tmp;
	t_stack *list;

	list = (*a);
	index = 1;
	tmp = ft_find_min(a);
	datamin = tmp->data;
	tmp->index = index;
	index++;
	datamin++;
	ft_mini_indexing(a, list, argc, index, datamin);
}