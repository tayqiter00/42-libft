#include "libft.h"
// #include <stdio.h>

t_list  *ft_lstnew(void *content)
{
    t_list  *new;

    new = malloc(sizeof(t_list));
    if (!new)
        return (NULL);
    new->content = content;
    new->next = NULL;
    return (new);
}

// int main()
// {
//     char    *str;
//     t_list  *head;

//     str = "example";
//     head = ft_lstnew(str);
//     if (!head)
//     {
//         fprintf(stderr, "Failed to create new node\n");
//         return (1);
//     }
//     printf("Node content: %s\n", (char *)head->content);
//     free(head);
//     return (0);
// }