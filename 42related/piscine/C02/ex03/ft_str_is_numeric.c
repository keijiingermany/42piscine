/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 19:21:38 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/17 12:14:14 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)

{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (0);
		str++;
	}
	return (1);
}

/* #include <stdio.h>

int	main(void)
{
	char testa[] = "Hello World!";
	char testb[] = "0123456789";
	char testc[] = "42 luxembourg";
	char testd[] = "";
	char teste[] = "0 ";

	int result_a = ft_str_is_numeric(testa);
	int result_b = ft_str_is_numeric(testb);
	int result_c = ft_str_is_numeric(testc);
	int result_d = ft_str_is_numeric(testd);
	int result_e = ft_str_is_numeric(teste);

	printf("a: %d\n", result_a);
	printf("b: %d\n", result_b);
	printf("c: %d\n", result_c);
	printf("d: %d\n", result_d);
	printf("e: %d\n", result_e);

} */