#include "libft.h"
// #include <stdio.h>

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;
    if (!(*lst))
    {
        *lst = new;
        return ;
    }
    new->next = *lst;
    *lst = new;
}

// int main()
// {
//     t_list  *head;
//     t_list  *node1;
//     t_list  *node2;
//     t_list  *current;
//     t_list  *temp;

//     head = NULL;
//     node1 = ft_lstnew("node1");
//     node2 = ft_lstnew("node2");
//     ft_lstadd_front(&head, node2);
//     ft_lstadd_front(&head, node1);
//     current = head;
//     while (current)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     while (head)
//     {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }
//     return (0);
// }
