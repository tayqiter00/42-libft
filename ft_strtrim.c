#include "libft.h"

char    *ft_strtrim(char const *s1, char const *set)
{
    size_t  i;
    size_t  j;
    size_t  end;
    char    *buffer;

    if (!s1)
        return (NULL);
    i = 0;
    while (set[j])
    {
        if (s1[i] == set[j])
        {
            i++;
            j = 0;
        }
        else
            j++;
    }
    j = 0;
    end = ft_strlen(s1) - 1;
    while (set[j])
    {
        if (s1[end] == set[j])
        {
            end--;
            j = 0;
        }
        else
            j++;
    }
    buffer = ft_substr(s1, i, end - i + 1);
    if (!buffer)
        return (NULL);
    return (buffer);
}
