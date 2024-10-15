/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:06:20 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/23 17:12:02 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (power < 0)
		return (0);
	while (power >= 1)
	{
		result *= nb;
		power--;
	}
	return (result);
}

/* #include <stdio.h>

int	main(void)
{
	int n = 0;
	int p = 0;

	int result = ft_iterative_power(n,p);

	printf("%d ^ %d is %d\n", n, p, result);
} */