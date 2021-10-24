#include <stdlib.h>

void    ft_bzero(void *s, size_t n)
{
    unsigned char *p_s;
    size_t i;

    i = 0;
    p_s = (unsigned char *)s;
    while(i < n)
    {
        *(p_s + i) = (unsigned char)0;
        i++;
    }
}