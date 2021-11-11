/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzarco-l <fzarco-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:03:20 by fzarco-l          #+#    #+#             */
/*   Updated: 2021/11/11 15:39:44 by fzarco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	find_char(char c, char *set)
{
	while (*set)
	{
		if (c == *set++)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		last;
	int		len;
	char	*str;

	if (!s1)
		return (NULL);
	start = 0;
	last = ft_strlen(s1) - 1;
	while (find_char(s1[start], (char *)set) && start < last)
		start++;
	while (find_char(s1[last], (char *)set) && last > 0)
		last--;
	len = last - start + 1;
	if (len <= 0)
		return (ft_strdup(""));
	str = malloc(len * sizeof(char) + 1);
	if (!str)
		return (NULL);
	ft_strncpy(str, s1 + start, len);
	return (str);
}
