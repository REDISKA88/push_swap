#include "push_swap.h"
void	ft_free_list(t_stack **ab, int print)
{
	t_stack	*tmp;
	t_stack	*list;

	list = *ab;
	while (list)
	{
		tmp = list->next;
		free(list);
		list = tmp;
	}
	*ab = NULL;
	if (print == 1)
		ft_putendl("Error");
	exit(1);
}

void	ft_free_argv(char **argv)
{
	int	i;

	i = 0;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(argv);
}

void	ft_error(char *str, t_tool *t)
{
	if (t)
		ft_putendl(str);
	free(t);
	exit(1);
}

void	ft_putendl(char *s)
{
	if (s == NULL)
		return ;
	while (*s)
	{
		write(1, s, 1);
		s++;
	}
	write(1, "\n", 1);
}

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
