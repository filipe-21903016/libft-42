/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzarco-l <fzarco-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:49:57 by fzarco-l          #+#    #+#             */
/*   Updated: 2021/11/11 18:54:35 by fzarco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	true_len;
	
	if (s == NULL)
		return ( NULL );
	if ((unsigned int)ft_strlen(s) < start || len < 1)
		return (ft_strdup(""));
	true_len = len;
	if ((size_t)ft_strlen(s) - start < len)
		true_len = ft_strlen(s) - start;
	substr = malloc(sizeof(char) * (true_len + 1));
	if (!substr || !s)
		return (NULL);
	ft_strlcpy(substr, s + start, true_len + 1);
	return (substr);
}
