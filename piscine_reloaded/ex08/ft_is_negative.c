/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:48:43 by kuehara           #+#    #+#             */
/*   Updated: 2024/10/16 14:01:53 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
/* {
	write(1, &c, 1);
} */

void	ft_is_negative(int n)
{
	if (n < 0)
		ft_putchar('N');
	else
		ft_putchar('P');
}

/* int main(void)
{
	ft_is_negative(5);
	write(1, "\n", 1);
	ft_is_negative(-4);
	write(1, "\n", 1);
	ft_is_negative(0);
	write(1, "\n", 1);
	return 0;
} */