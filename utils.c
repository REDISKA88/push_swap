#include "push_swap.h"
void	ft_free_all(t_stack **ab, t_tool *t, char **argv, int print)
{
	int		i;
	t_stack	*tmp;
	t_stack	*list;

	i = 0;
	list = *ab;
	while (argv[i])
	{
		free(argv[i]);
		i++;
	}
	free(t);
	free(argv);
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

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	long	num;
	int		sign;

	num = 0;
	sign = 1;
	while (*str == ' ' || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = sign * (-1);
		str++;
	}
	while (*str >= 48 && *str <= 57)
	{
		num = (num * 10) + (*str - '0');
		str++;
	}
	ft_check_number(num);
	return (num * sign);
}

void	*ft_memcpy(void *dst, const void *src, size_t num)
{
	char		*edst;
	const char	*esrc;

	if (!num || dst == src)
		return (dst);
	esrc = src;
	edst = dst;
	while (num > 0)
	{
		*edst = *esrc;
		num--;
		esrc++;
		edst++;
	}
	return (dst);
}

char	*ft_strdup(const char *str)
{
	char	*dst;
	int		len;

	len = ft_strlen(str);
	dst = (char *)malloc((len + 1) * sizeof(char));
	if (dst == NULL)
		return (NULL);
	ft_memcpy(dst, str, len);
	dst[len] = '\0';
	return (dst);
}
