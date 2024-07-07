#include "libft.h"

int ft_lstsize(t_list *lst)
{
    int     size;
    t_list  *temp;

    size = 0;
    if (!lst)
        return (size);
    temp = lst;
    while (temp != NULL)
    {
        size++;
        temp = temp->next;
    }
    return (size);
}
