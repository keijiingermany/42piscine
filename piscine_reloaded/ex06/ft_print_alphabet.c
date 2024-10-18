/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 13:47:55 by kuehara           #+#    #+#             */
/*   Updated: 2024/10/16 14:13:28 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_alphabet(void)
{
	int	i;

	i = 97;
	while (i < 123)
	{
		ft_putchar(i);
		i++;
	}
}

/* int main(void)
{
	ft_print_alphabet();
	ft_putchar('\n');
	return 0;
} */