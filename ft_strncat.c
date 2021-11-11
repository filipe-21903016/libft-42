/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzarco-l <fzarco-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:48:25 by fzarco-l          #+#    #+#             */
/*   Updated: 2021/10/26 12:48:26 by fzarco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
