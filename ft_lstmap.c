#include "libft.h"
// #include <stdio.h>

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *head;
    t_list  *new;

    if (!lst || !f || !del)
        return (NULL);
    head = NULL;
    while (lst)
    {
        new = ft_lstnew(f(lst->content));
        if (!new)
        {
            ft_lstclear(&head, del);
            return (NULL);
        }
        ft_lstadd_back(&head, new);
        lst = lst->next;
    }
    return (head);
}

// static void delete_content(void *content)
// {
//     free(content);
// }

// static void *rotone_content(void *content)
// {
//     char    *str;
//     size_t  i;

//     str = (char *)content;
//     i = 0;
//     while (str[i])
//     {
//         if (str[i] == 'Z')
//             str[i] = 'A';
//         else if (str[i] == 'z')
//             str[i] = 'a';
//         else if (ft_isalpha(str[i]))
//             str[i] += 1;
//         i++;
//     }
//     return ((void *)ft_strdup(str));
// }

// int main()
// {
//     t_list  *head;
//     char    *str;
//     t_list  *new;
//     t_list  *result;
//     t_list  *current;

//     head = NULL;
//     for (int i = 0; i < 5; i++)
//     {
//         str = ft_strdup("banana");
//         if (!str)
//         {
//             ft_lstclear(&head, delete_content);
//             return (1);
//         }
//         new = ft_lstnew(str);
//         ft_lstadd_back(&head, new);
//     }
//     result = ft_lstmap(head, rotone_content, delete_content);
//     current = result;
//     while (current)
//     {
//         printf("%s\n", (char *)current->content);
//         current = current->next;
//     }
//     ft_lstclear(&head, delete_content);
//     ft_lstclear(&result, delete_content);
// }
