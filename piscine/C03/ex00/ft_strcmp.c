/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 13:37:55 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/22 09:40:27 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/* #include <stdio.h>
#include <string.h>

int main (void)
{
	char s1[] = "AAAAA";
	char s2[] = "AAA";

	int result1 = ft_strcmp(s1, s2);
	printf("ft_strcmp: %d\n", result1);
	
	int result2 = strcmp(s1,s2);
	printf("strcmp; %d", result2);
} */