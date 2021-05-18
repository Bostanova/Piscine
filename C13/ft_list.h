#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_list t_list;

struct s_list
{
	void	*data;
	t_list	*next;
};

void	ft_list_push_front(t_list **begin_list, void *data);

#endif
