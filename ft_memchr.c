#include "libft.h"

// size == 0 results in segfault
// s == NULL results in segfault too

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char *s_ptr;

    s_ptr = (unsigned char *)s;
    while (*s_ptr && n > 0)
    {
        if (*s_ptr == (unsigned char)c)
            return ((void *)s_ptr);
        s_ptr++;
        n--;
    }
    return (NULL);
}
