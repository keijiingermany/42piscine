/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:06:39 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/31 16:20:24 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i ++;
	}
	return (1);
}

/* #include <stdio.h>

int main(void)
{
	int n[] = {-3,0,4,5,6,7,8,9,10,11,12,13,151,233};
	int size = sizeof(n) / sizeof(n[0]);
	int i = 0;

	while (i < size)
	{
		int nb = n[i];
		if (ft_is_prime(nb))
		{
			printf("%d is a PRIME number.\n", nb);
		}
		else
		{
			printf("%d is NOT a prime number.\n", nb);
		}
		i++;
	}
	return (0);
} */
