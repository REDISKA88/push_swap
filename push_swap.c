#include "push_swap.h"
#include "stdio.h"
int ft_valid(char **argv)
{
	int i;
	int j;
	i = 1;
	j = 0;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if(ft_isdigit(argv[i][j]) || argv[i][j] == '-')
			{
				j++;
			}
			else
			{
				printf("\nISDIGIT ERROR -> %c\n", argv[i][j]);
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int ft_find_dupl(int pos, int argc, char **argv)
{
	int j;

	j = pos + 1;
	while (j <= argc)
	{
		if (ft_atoi(argv[pos]) == ft_atoi(argv[j]))
			return (0);
		j++;
	}
	return 1;
}
int ft_argv_count(char **argv)
{
	int i;

	i = 0;
	while (argv[i])
		i++;
	return (i);
}
int main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;
	int i;

	i = 0;
	if (argc == 2)
	{
		argv = ft_split(argv[1], ' ');
		argc = ft_argv_count(argv);
		printf("ARGC: %d\n", argc);
	}
	if (argc > 2)
	{
		if(!ft_valid(argv))
		{
			printf("***valid fail***\n");
			return (-1);
		}
		argc--;
		a = ft_argv_to_list(argc, argv);
		if (!a)
			return (-1);
		ft_indexing(&a, argc);
		ft_sort(&a,&b, argc);
	}
	if (argc < 2)
	{
		printf("ERROR\n");
		return (-1);
	}

	return (0);
}
