#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char   *p_dest;
    unsigned char   *p_src;
    size_t          i;

    if (!dest || !src)
        return (NULL);
    p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
    if (src > dest)
	{
		i = 0;
		while (i < n)
		{
			p_dest[i] = p_src[i];
			i++;
		}
	}
	else if (src < dest)
	{
		while (n-- > 0)
			p_dest[n] = p_src[n];
	}
	return (dest);
}