/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:58:33 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/22 09:47:41 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	char	*origin;

	origin = dest;
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (origin);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char dest1[50] = "Hello, ";
	char src[] = "World!";
	char dest2[50] = "Hello, ";

	char *result1 = strcat(dest1, src);

	printf("strcat: %s\n", result1);

	char *result2 = ft_strcat(dest2, src);

	printf("ft_strcat: %s\n", result2);


} */