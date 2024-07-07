#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list  *temp;

    if (!lst)
        return (NULL);
    temp = lst;
    while (temp->next != NULL)
        temp = temp->next;
    return (temp);
}
