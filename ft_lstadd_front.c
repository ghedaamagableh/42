#include "libft.h"

void ft_stradd_front(t_list **list, t_list *new)
{
	if(!new)
		return ;
	new -> next = *list;
	*list = new;
}
