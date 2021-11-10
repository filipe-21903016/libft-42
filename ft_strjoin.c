#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_bytes;
	char	*str;

	if (!s1 && !s2)
		return (NULL);
	total_bytes = 1 + ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * total_bytes);
	if (!str)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str,s2);
	return (str);
}
