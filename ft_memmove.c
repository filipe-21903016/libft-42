#include <stdlib.h>
#include "libft.h"

void    *memmove(void *dest, const void *src, size_t n)
{
    unsigned char *p_temp;

    p_temp = malloc(sizeof(char) * n);
    if (p_temp == NULL)
        return (NULL);
    ft_memcpy(p_temp, src, n);
    ft_memcpy(dest, p_temp, n);
    return (dest);
}