#include "libft.h"
// #include <stdio.h>

void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (!lst || !del)
        return ;
        del(lst->content);
        free(lst);
}
// static void delete_content(void *content)
// {
//     free(content);
// }

// int main()
// {
//     t_list  *head;
//     t_list  *new;
//     char    *content;
//     t_list  *temp;

//     head = NULL;
//     for (int i = 0; i < 5; i++)
//     {
//         content = ft_strdup("some content");
//         new = ft_lstnew(content);
//         ft_lstadd_front(&head, new);
//     }
//     printf("list size before: %d\n", ft_lstsize(head));
//     temp = head;
//     head = head->next;
//     ft_lstdelone(temp, delete_content);
//     printf("list size after: %d\n", ft_lstsize(head));
//     while (head)
//     {
//         temp = head;
//         head = head->next;
//         ft_lstdelone(temp, delete_content);
//     }
//     return (0);
// }