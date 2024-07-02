#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    size_t  i;

    i = 0;
    if (!s)
        return (NULL);
    if (c == '\0')
        return ((char *)s + ft_strlen(s));
    while (s[i])
    {
        if (s[i] == c)
            return ((char *)s + i);
        i++;
    }
    return (NULL);
}
