/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 11:45:29 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/22 10:06:03 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char	*s;
	char	*t;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		s = str;
		t = to_find;
		while (*s && *t && (*s == *t))
		{
			s++;
			t++;
		}
		if (*t == '\0')
			return (str);
		str++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int main(void)
{
	char str[] = "Hello World";
	char find[] = "o ";

	char *result1 = strstr(str, find);
	char *result2 = ft_strstr(str, find);

	printf("Found with strstr: %s\n", result1);
	printf("Found with ft_strstr: %s\n", result2);

	return 0;
}
 */