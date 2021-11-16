/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzarco-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 12:28:43 by fzarco-l          #+#    #+#             */
/*   Updated: 2021/11/16 12:41:50 by fzarco-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

int	is_sep(char c, char sep)
{
	return (c == sep);
}

int	count_words(const char *str, char sep)
{
	int	words;

	words = 0;
	while (*str)
	{
		while (*str && is_sep(*str, sep))
			str++;
		if (*str && !is_sep(*str, sep))
		{
			words++;
			while (*str && !is_sep(*str, sep))
				str++;
		}
	}
	return (words);
}

char	*allocate_word(const char *str, char sep)
{
	int		i;
	char	*word;

	i = 0;
	while (str[i] != '\0' && !is_sep(str[i], sep))
		i++;
	word = (char *) malloc((i + 1) * sizeof(char));
	i = 0;
	while (str[i] != '\0' && !is_sep(str[i], sep))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**args;
	int		i;
	const char	*str;

	str = (const char *) s;
	args = (char **) malloc((count_words(str, c) + 1) * sizeof(char *));
	i = 0;
	while (*str)
	{
		while (*str && is_sep(*str, c))
			str++;
		if (*str && !is_sep(*str, c))
		{
			args[i++] = allocate_word(str, c);
			while (*str && !is_sep(*str, c))
				str++;
		}
	}
	args[i] = NULL;
	return (args);
}
