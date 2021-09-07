#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;
	size_t	dst_len;
	char	*ptr;

	ptr = dst;
	i = 0;
	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	if (size > 0)
	{
		while (*ptr)
			ptr++;
		while (src[i] != '\0' && i < size - 1)
			*ptr++ = src[i++];
		*ptr = '\0';
	}
	return (src_len + dst_len);
}
