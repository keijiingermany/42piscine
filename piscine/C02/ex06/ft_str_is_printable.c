/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 14:18:48 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/17 18:55:48 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
		return (1);
	while (*str)
	{
		if ((*str < 32) || *str == 127)
			return (0);
		str++;
	}
	return (1);
}

/* #include <stdio.h>

int	main(void)
{
	char testa[] = "42 luxembourg";
	char testb[] = "";
	char testc[] = "Printable chars: ~!@#$%^&*()_+";
	char testd[] = "Hello\nWorld";
	char teste[] = "Hello\tWorld";
	char testf[] = "Hello\x1BWorld"; 
	char testg[] = "Hello\0World";

	int result_a = ft_str_is_printable(testa);
	int result_b = ft_str_is_printable(testb);
	int result_c = ft_str_is_printable(testc);
	int result_d = ft_str_is_printable(testd);
	int result_e = ft_str_is_printable(teste);
	int result_f = ft_str_is_printable(testf);
	int result_g = ft_str_is_printable(testg);

	printf("a: %d\n", result_a);
	printf("b: %d\n", result_b);
	printf("c: %d\n", result_c);
	printf("d: %d\n", result_d);
	printf("e: %d\n", result_e);
	printf("f: %d\n", result_f);
	printf("g: %d\n", result_g);
} */