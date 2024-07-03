#include "libft.h"

void    *ft_calloc(size_t nmemb, size_t size)
{
    void    *buffer;

    if (nmemb * size > SIZE_MAX || nmemb * size == 0)
        return (NULL);
    buffer = malloc(nmemb * size);
    if (!buffer)
        return (NULL);
    ft_bzero(buffer, nmemb * size);
    return (buffer);
}
