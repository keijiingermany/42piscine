/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:19:01 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/23 08:26:55 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str++)
		length++;
	return (length);
}

int	is_valid_base(char *base)
{
	char	*p;
	char	*q;

	if (ft_strlen(base) < 2)
		return (0);
	p = base;
	while (*p)
	{
		if (*p == '+' || *p == '-')
			return (0);
		q = p + 1;
		while (*q)
		{
			if (*p == *q)
				return (0);
			q++;
		}
		p++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	nbr2;
	int		baselen;

	nbr2 = nbr;
	baselen = ft_strlen(base);
	if (!is_valid_base(base))
		return ;
	if (nbr2 < 0)
	{
		put_char('-');
		nbr2 = -nbr2;
	}
	if (nbr2 >= baselen)
		ft_putnbr_base(nbr2 / baselen, base);
	put_char(base[nbr2 % baselen]);
}

/* int	main(void)
{
	ft_putnbr_base(12345, "0123456789");
	put_char('\n');
	ft_putnbr_base(-12345, "0123456789");
	put_char('\n');
	ft_putnbr_base(12345, "+01");
	put_char('\n');
	ft_putnbr_base(-12345, "0");
	put_char('\n');
	ft_putnbr_base(12345, "0123456789ABCDEF");
	put_char('\n');
	ft_putnbr_base(-12345, "0123456789ABCDEF");
	put_char('\n');
	return (0);
} */
