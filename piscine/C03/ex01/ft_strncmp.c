/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 14:11:15 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/21 11:05:51 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	if (n == 0)
		return (0);
	while (n > 1 && *s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
		n--;
	}
	return (*s1 - *s2);
}

/* #include <stdio.h>
#include <string.h>

int main (void)
{
	char s1[] = "AACDE";
	char s2[] = "AAAFG";
	unsigned int n = 5;

	int result1 = ft_strncmp(s1, s2, n);
	printf("ft_strncmp: %d\n", result1);
	
	int result2 = strncmp(s1,s2, n);
	printf("strncmp: %d\n", result2);
} */