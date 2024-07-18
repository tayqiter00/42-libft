#include "libft.h"
// #include <stdio.h>

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

// int main()
// {
//     t_list  *head;
//     t_list  *last;
//     t_list  *new;
//     t_list  *temp;

//     head = NULL;
//     last = ft_lstnew("last node");
//     ft_lstadd_front(&head, last);
//     for (int i = 0; i < 5; i++)
//     {
//         new = ft_lstnew("others");
//         ft_lstadd_front(&head, new);
//     }
//     last = ft_lstlast(head);
//     printf("%s\n", (char *)last->content);
//     while (head)
//     {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }
//     return (0);
// }