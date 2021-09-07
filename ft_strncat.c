#include <string.h>

char	*ft_strncat(char *restrict dest, const char *restrict src, size_t n)
{
	char	*ptr;
	size_t	i;

	ptr = dest;
	i = 0;
	while (*ptr)
		ptr++;
	while (*src && i++ < n)
		*ptr++ = *src++;
	*ptr = '\0';
	return (dest);
}
