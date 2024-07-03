#include "libft.h"

/**
 * Similar to memmove but only used for memory areas that don't overlap
 */

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char   *p_dest;
    unsigned char   *p_src;

    if (!dest || !src)
        return (NULL);
    p_dest = dest;
    p_src = src;
    while (n--)
        p_dest[n] = p_src[n];
    return (dest);
}