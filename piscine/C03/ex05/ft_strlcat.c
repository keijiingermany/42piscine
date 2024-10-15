/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 08:30:13 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/22 10:05:01 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned	int	ft_strlen(const char *str)
{
	unsigned int	length;

	length = 0;
	while (*str++)
	{
		length++;
	}
	return (length);
}

unsigned	int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	char			*d;
	const char		*s;
	unsigned int	n;
	unsigned int	dlen;

	d = dest;
	s = src;
	n = size;
	while (n-- != 0 && *d != '\0')
		d++;
	dlen = d - dest;
	n = size - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*d++ = *s;
			n--;
		}
		s++;
	}
	*d = '\0';
	return (dlen + (s - src));
}

/* #include <stdio.h>

int	main(void)
{
	char	dest[20] = "Hello, ";
	char	src[] = "World!";
	unsigned	int size;
	unsigned	int result;

	size = 10;
	result = ft_strlcat(dest, src, size);
	printf("Custom ft_strlcat: %s, Total length: %u\n", dest, result);
	return (0);
}
 */