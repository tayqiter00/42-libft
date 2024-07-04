#include "libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *buffer;
    size_t  s_len;
    size_t  i;

    if (!s)
        return (NULL);
    s_len = ft_strlen(s);
    if (start >= s_len)
        return (ft_strdup(""));
    if (len > s_len - start)
        len = s_len - start;
    buffer = ft_calloc(len + 1, sizeof(char));
    if (!buffer)
        return (NULL);
    i = 0;
    while (i < len)
        buffer[i++] = s[start++];
    return (buffer);
}
