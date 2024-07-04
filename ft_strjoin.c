#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    size_t  total_len;
    char    *buffer;
    int     i;
    int     j;

    if (!s1 || !s2)
        return (NULL);
    total_len = ft_strlen(s1) + ft_strlen(s2);
    buffer = ft_calloc(total_len + 1, sizeof(char));
    if (!buffer)
        return (NULL);
    i = -1;
    while (s1[++i])
        buffer[i] = s1[i];
    j = -1;
    while (s2[++j])
        buffer[i++] = s2[j];
    return (buffer);
}
