/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/18 13:22:42 by kuehara           #+#    #+#             */
/*   Updated: 2024/10/21 11:56:45 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	word_count(const char *s, char c)
{
	size_t	count;
	int		in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

static char	*word_dup(const char *s, size_t start, size_t end)
{
	char	*word;
	size_t	i;

	word = (char *)malloc((end - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (start < end)
	{
		word[i] = s[start];
		start++;
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	add_word(char **result, const char *s, size_t *start, size_t *j)
{
	size_t	i;
	size_t	end;

	i = *start;
	while (s[i] != '\0' && s[i] != ' ')
		i++;
	end = i;
	result[*j] = word_dup(s, *start, end);
	(*j)++;
	*start = end;
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	i;
	size_t	j;
	size_t	start;

	if (!s)
		return (NULL);
	result = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	start = 0;
	while (s[i])
	{
		if (s[i] != c && start == 0)
			start = i;
		else if (s[i] == c && start != 0)
		{
			add_word(result, s, &start, &j);
		}
		i++;
	}
	result[j] = NULL;
	return (result);
}
