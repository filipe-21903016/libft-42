#include <stdlib.h>

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t          i;
    unsigned char   *p_dest;
    unsigned char   *p_src;

    p_dest = (unsigned char *) dest;
    p_src = (unsigned char *) src;
    i = 0;
    while (i < n)
    {
        *(p_dest + i) = *(p_src + i); 
        i++;
    }
    return (dest);
}