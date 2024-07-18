#include "libft.h"
// #include <stdio.h>

static size_t  word_count(char const *s, char c)
{
    int     i;
    size_t  count;

    i = -1;
    count = 0;
    while (s[++i])
    {
        if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
            count++;
    }
    return (count);
}

static char **fill_str(char const *s, char c, int word_count, char **buffer)
{
    int     i;
    int     start;
    int     end;

    i = -1;
    start = 0;
    while (++i < word_count)
    {
        while (s[start] && s[start] == c)
            start++;
        end = start;
        while (s[end] != c)
            end++;
        buffer[i] = ft_substr(s, start, end - start);
        if (!buffer[i])
        {
            while (i > 0)
                free(buffer[--i]);
            free(buffer);
            return (NULL);
        }
        start = end;
    }
    buffer[word_count] = NULL;
    return (buffer);
}

char    **ft_split(char const *s, char c)
{
    char    **buffer;
    size_t num_of_words;

    if (!s)
        return (NULL);
    num_of_words = word_count(s, c);
    buffer = malloc((num_of_words + 1) * sizeof(char *)); 
    if (!buffer)
        return (NULL);
    return (fill_str(s, c, num_of_words, buffer));
}

// int main()
// {
//     int i = 0;
//     char    *str = "This is   an example ";
//     char    **split;

//     split = ft_split(str, ' ');
//     while (split[i] != NULL)
//     {
//         printf("%s\n", split[i]);
//         i++;
//     }
//     i = 0;
//     while (split[i] != NULL)
//     {
//         free(split[i]);
//         i++;
//     }
//     free(split);
//     return (0);
// }
