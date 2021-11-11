/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzarco-l <fzarco-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 12:48:38 by fzarco-l          #+#    #+#             */
/*   Updated: 2021/11/11 17:27:07 by fzarco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	if (n == (size_t)0)
		return (0);
	i = 0;
	while (s1[i] && s1[i] == s2[i] && (size_t)i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}
