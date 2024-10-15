/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:06:45 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/31 13:41:42 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <time.h>

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

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	while (!ft_is_prime(nb))
	{
		nb++;
	}
	return (nb);
}

/* #include <stdio.h>

int main(void)
{
	int n[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,151,234};
	int size = sizeof(n) / sizeof(n[0]);
	int i = 0;

	while (i < size)
	{
		int nb = n[i];
		int result = ft_find_next_prime(nb);
		printf("Next prime number of %d is %d\n", nb, result);
		i++;
	}
	return (0);
} */