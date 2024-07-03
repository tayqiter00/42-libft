#include "libft.h"
#include <stdio.h>
#include <string.h>

int ft_atoi(const char *nptr)
{
    int result;
    int sign;
    size_t  i;

    sign = 1;
    result = 0;
    while (nptr[i] == '\t' || nptr[i] == '\n' || nptr[i] == '\v'
                || nptr[i] == '\f' || nptr[i] == '\r' || nptr[i] == ' ')
        i++;
    if (nptr[i] == '+' || nptr[i] == '-')
    {
        if (nptr[i] == '-')
            sign *= -1;
        i++;
    }
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = (result * 10) + (nptr[i] - '0');
        i++;
    }
    return (result * sign);
}
