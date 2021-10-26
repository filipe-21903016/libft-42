/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzarco-l <fzarco-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:48:38 by fzarco-l          #+#    #+#             */
/*   Updated: 2021/10/26 12:48:39 by fzarco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_strncmp(unsigned char *s1, unsigned char *s2, size_t n)
{
	int	i;

	if (n == (size_t)0)
		return (0);
	i = 0;
	while (s1[i] && s1[i] == s2[i] && (size_t)i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
