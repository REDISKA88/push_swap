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

//t_stack *ft_array_to_list(const int *numbers, int argc)
//{
//	t_stack *first;
//	t_stack *temp;
//
//	first = NULL;
//	while (argc)
//	{
//		temp = malloc(sizeof (t_stack));
//		if (!temp)
//			return (NULL);
//		temp->data = numbers[argc];
//		temp->next = first;
//		first = temp;
//		argc--;
//	}
//	return (first);
//}

