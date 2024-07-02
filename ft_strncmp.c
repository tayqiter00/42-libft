#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;
    size_t  s1_len;
    size_t s2_len;

    i = 0;
    if (n == 0)
        return (0);
    while (s1[i] && s2[i] && i < n)
    {
        if (s1[i] != s2[i])
            return (s1[i] - s2[i]);
        i++;
    }
    s1_len = ft_strlen(s1);
    s2_len = ft_strlen(s2);
    if ((s1_len > s2_len && n > s2_len) || (s1_len < s2_len && n > s1_len))
        return (s1[i]- s2[i]);
    return (0);
}
