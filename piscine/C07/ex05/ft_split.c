/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 08:17:29 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/30 08:57:41 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	char_is_separator(char c, char *charset)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (c == '\0');
}

int	count_words(char *str, char *charset)
{
	int	words;

	words = 0;
	while (*str)
	{
		if (!char_is_separator(*str, charset)
			&& char_is_separator(*(str + 1), charset))
			words++;
		str++;
	}
	return (words);
}

void	write_word(char *dest, char *from, char *charset)
{
	while (*from && !char_is_separator(*from, charset))
	{
		*dest = *from;
		dest++;
		from++;
	}
	*dest = '\0';
}

void	write_split(char **split, char *str, char *charset)
{
	int	word;
	int	len;

	word = 0;
	while (*str)
	{
		if (char_is_separator(*str, charset))
			str++;
		else
		{
			len = 0;
			while (str[len] && !char_is_separator(str[len], charset))
				len++;
			split[word] = (char *)malloc(sizeof(char) * (len + 1));
			if (split[word] == NULL)
				return ;
			write_word(split[word], str, charset);
			str += len;
			word++;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**rslt;
	int		words_count;

	words_count = count_words(str, charset);
	rslt = (char **)malloc(sizeof(char *) * (words_count + 1));
	if (rslt == NULL)
		return (NULL);
	rslt[words_count] = 0;
	write_split(rslt, str, charset);
	return (rslt);
}
