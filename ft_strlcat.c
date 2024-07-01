#include "libft.h"

/** 'size' should include space for null
 *  'size' is expected to be sizeof(dest)
 *  Appends at most (size - strlen(dst) - 1)
 *  GUARANTEES to NULL terminate it (if >= 1 byte free)
 *  Returns length of (src + dst)
 *  Returns (size + src_len) if NULL not found after traversing 'size'
 *  characters, string will NOT be null-terminated in this case
*/

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  dst_len;
    size_t  src_len;

    if (!dst || !src)
        return (size);
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    if (size == 0)
        return (src_len); // or src_len + dst_len? (will verify)
    if (dst_len >= size)
        return (src_len + size);
    i = 0;
    while (src[i] && i < size - dst_len - 1)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (dst_len + src_len);
}
