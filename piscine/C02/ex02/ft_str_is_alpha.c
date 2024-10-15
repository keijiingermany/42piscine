/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 13:37:08 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/17 11:22:49 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str < 'A' || (*str > 'Z' && *str < 'a') || *str > 'z')
			return (0);
		str++;
	}
	return (1);
}

/* #include <stdio.h>

int	main(void)
{
	char testa[] = "Everydayislikeholiday";
	char testb[] = "0123456789!!!!!";
	char testc[] = "Do your best";
	char testd[] = "";

	int result_a = ft_str_is_alpha(testa);
	int result_b = ft_str_is_alpha(testb);
	int result_c = ft_str_is_alpha(testc);
	int result_d = ft_str_is_alpha(testd);

	printf("a: %d\n", result_a);
	printf("b: %d\n", result_b);
	printf("c: %d\n", result_c);
	printf("d: %d\n", result_d);
} */