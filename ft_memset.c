#include "libft.h"

void    *ft_memset(void *s, int c, size_t n)
{
    size_t          i;
    unsigned char   *ptr;

    i = 0;
    if (!s)
        return (NULL);
    ptr = (unsigned char *)s;
    while (i < n)
        ptr[i++] = (unsigned char)c;
    return (s);
}