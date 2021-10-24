#include <stdlib.h>

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t  i;
    unsigned char   *ptr1; 
    unsigned char   *ptr2; 

    ptr1 = (unsigned char *) s1;
    ptr2 = (unsigned char *) s2;
    i = 0;

    if (n == (size_t) 0)
        return (0);
    while (*(ptr1 + i) == *(ptr2 + i) && i < n - 1)
        i++;
    return (*(ptr1 + i) - *(ptr2 + i));
}