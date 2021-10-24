#include <stdlib.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
    size_t	i;
	int		little_len;

    i = 0;
	little_len = ft_strlen(little);
    if (little_len == 0)
        return ((char *)big);
    while(big[i] != '\0' && i < len)
    {
		if (i + little_len > len)
			break;
		if (!ft_strncmp((char *)(big + i), (char *)little, little_len))
			return ((char *) (big + i));
        i++;
    }
    return (NULL);
}