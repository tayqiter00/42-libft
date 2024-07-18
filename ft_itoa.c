#include "libft.h"

static size_t  buffer_len(int n)
{
    long    num;
    size_t  len;

    len = 0;
    num = n;
    if (n == 0)
        return (1);
    if (n < 0)
    {
        len++;
        num = -num;
    }
    while (num != 0)
    {
        len++;
        num = num / 10;
    }
    return (len);
}

char    *ft_itoa(int n)
{
    size_t  size;
    long    num;
    char    *buffer;

    size = buffer_len(n);
    buffer = ft_calloc(size + 1, sizeof(char));
    if (!buffer)
        return (NULL);
    num = n;
    if (num < 0)
        num = -num;
    while (size--)
    {
        buffer[size] = ((num % 10) + '0');
        num /= 10;
    }
    if (n < 0)
        buffer[0] = '-';
    return (buffer);
}
