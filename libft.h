#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

/* PART 1 - LIBC FUNCTIONS */
int     ft_isalpha(int c);
int     ft_isdigit(int c);
int     ft_isalnum(int c);
int     ft_isascii(int c);
int     ft_isprint(int c);
size_t  ft_strlen(const char *s);
void    *ft_memset(void *s, int c, size_t n);
void    *ft_memmove(void *dest, const void *src, size_t n);
size_t  strlcpy(char *dst, const char *src, size_t size);
size_t  ft_strlcat(char *dst, const char *src, size_t size);

#endif