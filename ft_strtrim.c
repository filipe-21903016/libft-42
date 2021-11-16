/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzarco-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 15:09:20 by fzarco-l          #+#    #+#             */
/*   Updated: 2021/11/16 15:19:13 by fzarco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



char	*ft_strtrim(char const *s, char const *set)
{
	char	*str;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = ft_strlen(s) - 1;
	while (ft_strchr(set,s[i]))
		i++;
	while (ft_strchr(set, s[len - j]))
		j++;
	if (i == 0 && j == 0)
	{
		str = ft_strdup(s);
		return (str);
	}
	if (i == len + 1)
	{
		str = ft_strdup("");
		return (str);
	}
	if (!(str = ft_substr(s, i, len - j - i + 1)))
		return (NULL);
	return (str);
}

