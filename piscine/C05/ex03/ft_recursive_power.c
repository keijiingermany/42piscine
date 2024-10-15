/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:06:25 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/23 17:34:04 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}

/* #include <stdio.h>

int	main(void)
{
	int n1 = 0;
	int p1 = 0;
	int	n2 = -4;
	int p2 = -1;
	int result1 = ft_recursive_power(n1,p1);
	int result2 = ft_recursive_power(n2,p2);

	printf("test1: %d ^ %d is %d\n", n1, p1, result1);
	printf("test2: %d ^ %d is %d\n", n2, p2, result2);
} */