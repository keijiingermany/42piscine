/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 15:06:29 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/23 18:01:28 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index -1) + ft_fibonacci(index -2));
}

/* #include <stdio.h>

int main(void)
{
	int i1 = -10;
	int i2 = 1;
	int i3 = 10;

	int result1 = ft_fibonacci(i1);
	int result2 = ft_fibonacci(i2);
	int result3 = ft_fibonacci(i3);
	printf("index: %d, finabocci: %d\n", i1, result1);
	printf("index: %d, finabocci: %d\n", i2, result2);
	printf("index: %d, finabocci: %d\n", i3, result3);
} */