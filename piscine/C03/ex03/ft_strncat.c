/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 15:37:30 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/21 11:33:01 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*origin;

	origin = dest;
	while (*dest)
		dest++;
	while (nb > 0 && *src)
	{
		*dest = *src;
		dest++;
		src++;
		nb--;
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
	unsigned int n = 2;

	char *result1 = strncat(dest1, src, n);

	printf("strncat: %s\n", result1);

	char *result2 = ft_strncat(dest2, src, n);

	printf("ft_strncat: %s\n", result2);

} */