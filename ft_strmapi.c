#include "libft.h"
// #include <stdio.h>

// char    ft_matchy(unsigned int index, char c)
// {
//     const char *passcode = "guEs@SThis!";

//     if (index >= ft_strlen(passcode))
//         return ('\0');
//     if (passcode[index] == c)
//         return (c);
//     else
//         return ('\0');
// }

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int    i;
    size_t      size;
    char        *buffer;

    i = 0;
    if (!s || !f)
        return (NULL);
    size = ft_strlen(s);
    buffer = ft_calloc(size + 1, sizeof(char));
    if (!buffer)
        return (NULL);
    while (s[i])
    {
        buffer[i] = f(i, s[i]);
        i++;
    }
    return (buffer);
}
// int main()
// {
//     char *answer = "guEs@SThis!";
//     char    *buffer = ft_strmapi(answer, &ft_matchy);

//     printf("%s\n", buffer);
//     free(buffer);
// }
