#include "push_swap.h"
int	ft_valid(char **argv, t_tool *t)
{
	int	i;
	int	j;

	i = 1;
	if (t->str == 1)
		i = 0;
	j = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (ft_isdigit(argv[i][j]) || argv[i][j] == '-')
			{
				j++;
			}
			else
				return (0);
		}
		i++;
	}
	return (1);
}

int	ft_find_dupl(int pos, int argc, char **argv)
{
	int	j;

	j = pos + 1;
	while (j <= argc)
	{
		if (ft_atoi(argv[pos]) == ft_atoi(argv[j]))
			return (0);
		j++;
	}
	return (1);
}

int	ft_argv_count(char **argv, t_tool *t)
{
	int	i;

	i = 0;
	while (argv[i])
		i++;
	t->str = 1;
	return (i);
}

int	ft_check_sorting(t_stack *a)
{
	int		sorting;
	t_stack	*tmp;
	t_stack	*ab;

	tmp = a;
	ab = a;
	a = a->next;
	sorting = 0;
	if (tmp->index == 1)
		sorting++;
	while (a)
	{
		if (a->index == (tmp->index + 1))
			sorting++;
		tmp = a;
		a = a->next;
	}
	if (sorting == ft_count_list(ab))
		return (0);
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	t_tool	*t;

	t = malloc(sizeof (t_tool));
	if (argc == 1 || !t)
		ft_error("Enter numbers into program parameters", t);
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		argc = ft_argv_count(argv, t);
	}
	argc--;
	a = ft_argv_to_list(argc, argv, t);
	if (t->str == 1)
		argc++;
	ft_indexing(&a, argc);
	ft_sort(&a, &b, argc, t);
	ft_free_list(&a, 0);
	if (t->str == 1)
		ft_free_argv(argv);
	free(t);
	return (0);
}
