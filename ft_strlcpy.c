#include "libft.h"

/** 'size' should include space for null
 *  'size' is expected to be sizeof(dest)
 *  Copies size - 1 chars from src to dst and GUARANTEES to null terminate it (if size > 0)
 *  Returns length of src string
*/

size_t  strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  src_len;

    if (!dst || !src)
        return (0);
    src_len = ft_strlen(src);
    if (size <= 0)
        return (src_len);
    i = 0;
    while (i < size - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (src_len);
}
