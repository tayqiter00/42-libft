#include "libft.h"

/**
 * The trick here is to exit the while loop before we reach the final char
 * to be compared so that we get the exact difference
 */

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0)
        return (0);
    while (s1[i] && s2[i] && i < (n - 1) && s1[i] == s2[i])
        i++;
    return (s1[i]- s2[i]);
}
