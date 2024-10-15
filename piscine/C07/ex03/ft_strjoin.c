/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:22:55 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/31 08:14:05 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	total_length(int size, char **strs, char *sep)
{
	int	total_len;
	int	sep_len;

	if (size == 0)
	{
		return (0);
	}
	total_len = 0;
	sep_len = ft_strlen(sep);
	while (size > 0)
	{
		total_len += ft_strlen(strs[size - 1]);
		if (size > 1)
		{
			total_len += sep_len;
		}
		size--;
	}
	return (total_len);
}

char	*copy_and_advance(char *dest, char *src)
{
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}

void	concatenate_strings(int size, char **strs, char *sep, char *result)
{
	char	*dest;

	dest = result;
	while (size > 0)
	{
		dest = copy_and_advance(dest, strs[0]);
		strs++;
		size--;
		if (size > 0)
		{
			dest = copy_and_advance(dest, sep);
		}
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		total_len;
	char	*result;

	if (size == 0)
	{
		result = (char *)malloc(1);
		if (result == NULL)
		{
			return (NULL);
		}
		result[0] = '\0';
		return (result);
	}
	total_len = total_length(size, strs, sep);
	result = (char *)malloc((total_len + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	result[0] = '\0';
	concatenate_strings(size, strs, sep, result);
	return (result);
}

/* int	main()
{
	char	*strs[] = {"Hello", "world", "this", "is", "C"};
	char	*sep;
	int		size;
	int		total_len;
	char	*result;

	sep = " ";
	size = 5;
	total_len = total_length(size, strs, sep);
	result = ft_strjoin(size, strs, sep);
	if (result != NULL)
	{
		printf("Result: %s\n", result);
		printf("Total length: %d\n", total_len);
		free(result);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return (0);
}
  */
