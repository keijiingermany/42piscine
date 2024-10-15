/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:06:34 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/23 19:39:09 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	if (nb < 0)
		return (0);
	sqrt = 0;
	while (nb > (sqrt * sqrt) && sqrt <= 46340)
	{
		sqrt++;
	}
	if (nb == (sqrt * sqrt))
	{
		return (sqrt);
	}
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	int n1 = 2147483647;
	int n2 = -100;
	int n3 = 9801;

	printf("Square root of %d is %d\n", n1, ft_sqrt(n1));
	printf("Square root of %d is %d\n", n2, ft_sqrt(n2));
	printf("Square root of %d is %d\n", n3, ft_sqrt(n3));  
} */