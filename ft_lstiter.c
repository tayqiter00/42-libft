#include "libft.h"
// #include <stdio.h>

void    ft_lstiter(t_list *lst, void (*f)(void *))
{
    if (!lst || !f)
        return ;
    while (lst)
    {
        f(lst->content);
        lst = lst->next;
    }
}

// static void print_content(void *arg)
// {
//     printf("%s\n", (char *)arg);
// }

// int main()
// {
//     t_list  *head;
//     t_list  *new;
//     t_list  *temp;

//     head = NULL;
//     for (int i = 0; i < 5; i++)
//     {
//         new = ft_lstnew("banana");
//         ft_lstadd_front(&head, new);
//     }
//     ft_lstiter(head, print_content);
//     while (head)
//     {
//         temp = head;
//         head = head->next;
//         free(temp);
//     }
//     return (0);
// }