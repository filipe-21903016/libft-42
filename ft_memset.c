#include <stdlib.h>

void    *ft_memset(void *s, int c, size_t n)
{
    int             i;
    unsigned char   *ptr;

    i = 0;
    ptr = (unsigned char*) s; 
    while (i < n)
    {
        *(ptr + i) = c;
        i++;
    }
    return (s);
}