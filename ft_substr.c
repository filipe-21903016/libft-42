#include <stdlib.h>
#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *substr;
    size_t  true_len;

    if ((unsigned int) ft_strlen(s) < start || len < 1)
        return (ft_strdup(""));
    true_len = len;
    if ((size_t) ft_strlen(s) - start < len)
        true_len = ft_strlen(s) - start;
    substr = malloc(sizeof(char) * (true_len + 1));
    if (!substr || !s)
        return (NULL);
    ft_strlcpy(substr, s + start, true_len + 1);
    return (substr);
}
