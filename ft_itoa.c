/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzarco-l <fzarco-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:08:00 by fzarco-l          #+#    #+#             */
/*   Updated: 2021/11/17 15:54:14 by fzarco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_len(int n)
{
	int				len;
	unsigned int	nb;

	len = 0;
	nb = n;
	if (n < 0)
	{
		nb *= -1;
		len++;
	}
	while (nb)
	{
		nb /= 10;
		len++;
	}	
	return (len);
}

char	*reverse(char **str)
{
	char	*p_str;
	int		i;
	int		j;
	char	temp;

	p_str = *str;
	i = 0;
	j = ft_strlen(*str) - 1;
	if (p_str[i] == '-')
		i++;
	while (i < j)
	{
		temp = p_str[i];
		p_str[i++] = p_str[j];
		p_str[j--] = temp;
	}
	return (p_str);
}

char	*ft_itoa(int n)
{
	char			*str;
	char			*p_str;
	unsigned int	nb;

	if (n == 0)
		return (ft_strdup("0"));
	nb = n;
	str = malloc(sizeof(char) * get_len(nb) + 1);
	if (!str)
		return (NULL);
	p_str = str;
	if (n < 0)
	{
		*p_str++ = '-';
		nb *= -1;
	}
	while (nb)
	{
		*p_str++ = (nb % 10) + '0';
		nb /= 10;
	}
	*p_str = '\0';
	return (reverse(&str));
}
