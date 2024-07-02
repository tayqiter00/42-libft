#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t  i;
    size_t  len;

    i = 0;
    if (!s)
        return (NULL);
    len = ft_strlen(s);
    if (c == '\0')
        return ((char *)s + len);
    while (len--)
    {
        if (s[len] == c)
            return ((char *)s + len);
    }
    return (NULL);
}