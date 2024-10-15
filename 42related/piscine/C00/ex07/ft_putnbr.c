/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 17:31:27 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/30 17:48:55 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long	nb2;

	nb2 = nb;
	if (nb2 < 0)
	{
		ft_putchar('-');
		nb2 = -nb2;
	}
	if (nb2 > 9)
		ft_putnbr(nb2 / 10);
	ft_putchar((nb2 % 10) + '0');
}

/* #include <stdlib.h>

int main(int ac, char **av)
{
	int result = atoi(av[1]);
	if(ac == 2)
		ft_putnbr(result);
} */