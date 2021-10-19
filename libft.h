#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

int		ft_strlen(const char *str);
int		ft_atoi(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
char	*ft_strdup(const char *s);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strcpy(char *restrict dest, const char *src);
char	*ft_strncpy(char *restrict dest, const char *restrict src, size_t n);
char	*ft_strcat(char *restrict dest, const char *restrict src);
char	*ft_strncat(char *restrict dest, const char *restrict src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char    *ft_strchr(const char *s, int c);
char    *ft_strrchr(const char *s, int c);
void    *ft_memset(void *s, int c, size_t n);
void    *ft_calloc(size_t nmemb, size_t size);

#endif
