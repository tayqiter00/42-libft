#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char   *s1_ptr;
    unsigned char   *s2_ptr;

    s1_ptr = (unsigned char *)s1;
    s2_ptr = (unsigned char *)s2;
    while (*s1_ptr && *s2_ptr && *s1_ptr == *s2_ptr && n > 1)
    {
        s1_ptr++;
        s2_ptr++;
        n--;
    }
    return (*s1_ptr - *s2_ptr);
}
