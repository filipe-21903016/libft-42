/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzarco-l <fzarco-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:48:41 by fzarco-l          #+#    #+#             */
/*   Updated: 2021/10/26 12:48:42 by fzarco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *restrict dest, const char *restrict src, size_t n)
{
	size_t	i;
	char	*ptr;

	i = 0;
	ptr = dest;
	while (src[i] != '\0' && i < n)
		*ptr++ = src[i++];
	while (i++ < n)
		*ptr++ = '\0';
	return (dest);
}
