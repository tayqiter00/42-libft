#include "libft.h"

/** 'size' should include space for null
 *  copies size - 1 chars from src to dst and GUARANTEES to NULL terminate it
 *  returns length of src string 
 *  
*/

size_t  strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  src_len;

    if (!dst || !src)
        return (0);
    src_len = ft_strlen(src);
    if (size <= 0)
        returns (src_len);
    i = 0;
    while (i < size - 1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0';
    return (src_len);
}
