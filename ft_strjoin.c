/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzarco-l <fzarco-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:11:14 by fzarco-l          #+#    #+#             */
/*   Updated: 2021/11/16 16:27:49 by fzarco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	total_bytes;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	total_bytes = 1 + ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * total_bytes);
	if (!str)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	return (str);
}
