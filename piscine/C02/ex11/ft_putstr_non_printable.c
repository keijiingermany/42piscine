/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 18:19:22 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/17 19:00:38 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar('\\');
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			ft_putchar(*str);
		else
			ft_putnbr_hex((unsigned char) *str);
		str++;
	}
}

/* int main(void)
{
	char str1[] = "Coucou\ntu vas bien ?";
	char str2[] = "Coucou\ttu vas bien ?";
	char str3[] = "Hello, \x7FWorld!";
	ft_putstr_non_printable(str1);
	ft_putchar('\n');
	ft_putstr_non_printable(str2);
	ft_putchar('\n');
	ft_putstr_non_printable(str3);
	ft_putchar('\n');
	return (0);
} */
