#include "libft.h"

char *ft_strdup(const char *s)
{
    size_t  i;
    size_t  s_len;
    char    *buffer;

    if (!s)
        return (NULL);
    s_len = ft_strlen(s);
    buffer = ft_calloc(s_len + 1, sizeof(char));
    if (!buffer)
        return (NULL);
    i = 0;
    while (s[i])
    {
        buffer[i] = s[i];
        i++;
    }
    return (buffer);
}
