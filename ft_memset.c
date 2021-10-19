#include <stdlib.h>

void    *ft_memset(void *s, int c, size_t n)
{
    int             i;
    unsigned char   *ptr;

    i = 0;
    ptr = (unsigned char*) s; 
    while ((size_t) i < n)
    {
        *(ptr + i) = c;
        i++;
    }
    return (s);
}