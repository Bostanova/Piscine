#include <unistd.h>
#include <stdlib.h>

typedef struct s_list t_list;
struct s_list
{
	char	*str;
	t_list	*next;
};

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

t_list	*add_link(t_list *list, char *str)
{
	t_list *tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp) //проверка на успешное выделение памяти
	{
		tmp->str = str;
		tmp->next = list;
	}
	return (tmp);
}

void	print_list(t_list *list)
{
	while (list)
	{
		ft_putstr(list->str);
		list = list->next;
	}
}

int	main(void)
{
	t_list *list;

	list = NULL;
	list = add_link(list, "toto\n");
	list = add_link(list, "tata\n");
	list = add_link(list, "tutu\n");
	print_list(list);
	return (0);
}