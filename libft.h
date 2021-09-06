#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>

int		ft_strlen(const char *str);
int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char const *s);
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

#endif
