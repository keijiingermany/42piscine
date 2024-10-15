/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:37:11 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/17 15:09:24 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*origin;

	origin = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (origin);
}

/* #include <stdio.h>

int	main(void)
{
	char str1[] = "hello world!";
	char str2[] = "123abcDEF";
    char str3[] = "already UPPERCASE";
    char str4[] = "";

    printf("original: %s ", str1);
	printf("uppercase: %s\n", ft_strupcase(str1));
	printf("original: %s ", str2);
	printf("uppercase: %s\n", ft_strupcase(str2));
	printf("original: %s ", str3);
	printf("uppercase: %s\n", ft_strupcase(str3));
	printf("original: %s ", str4);
	printf("uppercase: %s\n", ft_strupcase(str4));
    
	return (0);
} */