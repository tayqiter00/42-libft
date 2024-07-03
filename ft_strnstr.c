#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t  i;
    size_t  j;
    size_t  temp;

    i = 0;
    if (little[i] == '\0')
        return ((char *)big);
    while (big[i])
    {
        j = 0;
        temp = i;
        while (i < len)
        {
            if (big[i] == little[j] && i < len)
            {
                i++;
                j++;
                if (little[j] == '\0')
                    return ((char *)&big[temp]);
            }
            else
                break ;
        }
        i++;
    }
    return (NULL);
}

/* SHORTER ALTERNATIVE */
// char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	if (needle[0] == '\0')
// 		return ((char *)haystack);
// 	while (i < len && haystack[i])
// 	{
// 		j = 0;
// 		while (haystack[i + j] == needle[j] && (i + j) < len && haystack[i + j])
// 		{
// 			if (needle[j + 1] == '\0')
// 				return ((char *)&haystack[i]);
// 			j++;
// 		}
// 		i++;
// 	}
// 	return (0);
// }