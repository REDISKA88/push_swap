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
			//if(argv[i][j] >= 48 && argv[i][j] <= 57)
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
int main(int argc, char **argv)
{
	t_stack *a;
	t_stack *b;
	int i;

	i = 0;
	if(!ft_valid(argv))
	{
		printf("***valid fail***\n");
		return (-1);
	}
//	printf("***valid ok***\n");
	argc--;
	a = ft_argv_to_list(argc, argv);
	// split
//	printf("STACK A:\n");
//	prints(a);
	ft_indexing(&a, argc);
//	printf("after index:\n");
//	print_index(a);
 	ft_sort(&a,&b, argc);
	printf("\n");
	printf("\n");
	printf("\n");
	print_b(b);
	return (0);
}

//*** TRASH ***
//int	ft_dupl(const int *numbers, int pos, int size)
//{
//	int index;
//
//	index = pos + 1;
//	while (index <= size)
//	{
//		if (numbers[pos] == numbers[index])
//			return (0);
//		index++;
//	}
//return (1);
//}
//int	ft_dupl(t_stack **a)
//{
//	t_stack *tmp;
//	t_stack *pos;
//	tmp = (*a)->next;
//	pos = *a;
//		while (tmp)
//		{
//			if (tmp->data == pos->data)
//				return (0);
//			tmp = tmp->next;
//		}
//	return (1);
//}
