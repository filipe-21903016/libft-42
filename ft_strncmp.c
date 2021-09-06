#include <string.h>

int	ft_strncmp(unsigned char *s1, unsigned char *s2, size_t n)
{
	int	i;

	if (n == (size_t) 0)
		return (0);
	i = 0;
	while (s1[i] && s1[i] == s2[i] && (size_t) i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
