/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 15:09:53 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/17 15:18:04 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*origin;

	origin = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (origin);
}

/* #include <stdio.h>

int	main(void)
{
	char str1[] = "HELLO WORLD!";
	char str2[] = "123abcDEF";
    char str3[] = "already LOWERCASE";
    char str4[] = "";

    printf("original: %s ", str1);
	printf("lowercase: %s\n", ft_strlowcase(str1));
	printf("original: %s ", str2);
	printf("lowercase: %s\n", ft_strlowcase(str2));
	printf("original: %s ", str3);
	printf("lowercase: %s\n", ft_strlowcase(str3));
	printf("original: %s ", str4);
	printf("lowercase: %s\n", ft_strlowcase(str4));
    
	return (0);
} */