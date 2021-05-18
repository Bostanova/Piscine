#include "ft_list.h"

int	main(void)
{
	t_list *list;

	list = ft_create_elem("hello");
	print_list(list);
}