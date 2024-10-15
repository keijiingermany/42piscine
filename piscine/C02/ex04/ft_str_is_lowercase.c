/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 12:14:33 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/17 12:34:55 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char test_a[] = "abcdefghijklmnopqrstuvwxyz";
	char test_b[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char test_c[] = "0123,B4567";
	char test_d[] = " a ";
	char test_e[] = "";

	int	result_a = ft_str_is_lowercase(test_a);
	int	result_b = ft_str_is_lowercase(test_b);
	int	result_c = ft_str_is_lowercase(test_c);
	int	result_d = ft_str_is_lowercase(test_d);
	int	result_e = ft_str_is_lowercase(test_e);

	printf("a: %d\n", result_a);
	printf("b: %d\n", result_b);
	printf("c: %d\n", result_c);
	printf("d: %d\n", result_d);
	printf("e: %d\n", result_e);
} */