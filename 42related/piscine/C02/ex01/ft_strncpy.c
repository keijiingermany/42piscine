/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 10:02:15 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/17 11:18:42 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	char	*d;

	d = dest;
	while (n > 0 && *src != '\0' )
	{
		*d++ = *src++;
		n--;
	}
	while (n > 0)
	{
		*d++ = '\0';
		n--;
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	const char src [] = "Everyday is like Sunday!";
	char dest [100];
	unsigned int n = 0;
	
	char *result = ft_strncpy(dest, src, n);
	printf("ft_strncpy result: %s\n", dest);
	printf("ft_strncpy points to: %s\n", result);

	result = strncpy(dest, src, n);
	printf("strncpy result: %s\n", dest);
	printf("strncpy points to: %s\n", result);

	memset(dest, 0, sizeof(dest));
	n = 10;
	result = ft_strncpy(dest, src, n);
	printf("ft_strncpy result: %s\n", dest);
	printf("ft_strncpy points to: %s\n", result);

	memset(dest, 0, sizeof(dest));
	result = strncpy(dest, src, n);
	printf("strncpy result: %s\n", dest);
	printf("strncpy points to: %s\n", result);

	return (0);
} */
