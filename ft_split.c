/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzarco-l <fzarco-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 15:02:23 by fzarco-l          #+#    #+#             */
/*   Updated: 2021/11/11 15:36:31 by fzarco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	count_words(char *s, char c)
{
	int	words;

	words = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			words++;
			while (*s != '\0' && *s != c)
			s++;
		}
		else
			s++;
	}
	return (words);
}

char	*make_word(char *s, char c)
{
	int		len;
	char	*p_s;
	char	*word;

	p_s = s;
	len = 0;
	while (*p_s && *p_s++ != c)
		len++;
	word = malloc(sizeof(char) * len + 1);
	if (!word)
		return (NULL);
	ft_strncpy(word, s, len);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	char	**p_words;

	words = malloc(sizeof(char *) * (count_words((char *) s, c) + 1));
	if (!words)
		return (NULL);
	p_words = words;
	while (*s != '\0')
	{
		if (*s != c)
		{
			*p_words++ = make_word((char *)s, c);
			while (*s != '\0' && *s != c)
				s++;
		}
		else
			s++;
	}	
	p_words = NULL;
	return (words);
}
