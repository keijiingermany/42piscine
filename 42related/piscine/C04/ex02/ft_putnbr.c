/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:18:52 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/22 19:13:17 by kuehara          ###   ########.fr       */
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
	if (nb2 >= 10)
	{
		ft_putnbr(nb2 / 10);
	}
	ft_putchar((nb2 % 10) + '0');
}

/* int	main(void)
{
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(100);
	ft_putchar('\n');
	ft_putnbr(-1234);
	ft_putchar('\n');
	ft_putnbr(0);
	ft_putchar('\n');
	return (0);
} */