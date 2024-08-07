#include "libft.h"
// #include <stdio.h>

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
// int main()
// {
//     t_list  *head;
//     t_list  *new;
//     t_list  *temp;

//     head = NULL;
//     for (int i = 0; i < 5; i++)
//     {
//         new = ft_lstnew("some content");
//         ft_lstadd_front(&head, new);
//     }
//     printf("size of list: %d\n", ft_lstsize(head));
//     while (head)
//     {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }
// }