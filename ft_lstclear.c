#include "libft.h"
// #include <stdio.h>

/**
 * "Finally, the pointer to the list must be set to NULL.""
 */
void    ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list  *temp;

    if (!lst || !del || !(*lst))
        return ;
    while (*lst)
    {
        temp = (*lst)->next;
        ft_lstdelone(*lst, del);
        *lst = temp;
    }
    *lst = NULL;
}
// static void delete_content(void *content)
// {
//     free(content);
// }

// int main()
// {
//     t_list  *head;
//     char    *content;
//     t_list  *new;

//     head = NULL;
//     for (int i = 0; i < 5; i++)
//     {
//         content = ft_strdup("some content");
//         new = ft_lstnew(content);
//         ft_lstadd_front(&head, new);
//     }
//     printf("list size before: %d\n", ft_lstsize(head));
//     ft_lstclear(&head, delete_content);
//     printf("list size after: %d\n", ft_lstsize(head));
//     return (0);
// }