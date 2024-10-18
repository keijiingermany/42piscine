/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:40:19 by kuehara           #+#    #+#             */
/*   Updated: 2024/10/16 13:59:10 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/* {
	write(1, &c, 1);
} */

void	ft_print_numbers(void)
{
	int	i;

	i = 48;
	while (i <= 57)
	{
		ft_putchar(i);
		i++;
	}
}

/* int main(void)
{
	ft_print_numbers();
	ft_putchar('\n');
	return 0;
} */