#include "libft.h"

/**
 * Note that we start checking from the null terminator so that the case where
 * c == '\0' is taken care of
 */

char *ft_strrchr(const char *s, int c)
{
    size_t  len;

    if (!s)
        return (NULL);
    len = strlen(s);
    while (len >= 0)
    {
        if (s[len] == c)
            return ((char *)s + len);
        len--;
    }
    return (NULL);
}
