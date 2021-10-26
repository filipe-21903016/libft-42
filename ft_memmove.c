/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzarco-l <fzarco-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:47:39 by fzarco-l          #+#    #+#             */
/*   Updated: 2021/10/26 15:37:51 by fzarco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*p_dest;
	unsigned char	*p_src;
	
	p_dest = (unsigned char *)dest;
	p_src = (unsigned char *)src;
	
	if ((uintptr_t) dest < (uintptr_t) src)
	{
		while (n != 0)
		{
			p_dest[n] = p_src[n];
			n--;
		}
	}
	else
		ft_memcpy(dest, src, n);
	return (dest);
}