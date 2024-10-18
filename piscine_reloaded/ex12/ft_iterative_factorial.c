/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 09:19:14 by kuehara           #+#    #+#             */
/*   Updated: 2024/10/17 18:30:50 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	if (nb < 0 || nb > 12)
		return (0);
	result = 1;
	i = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}

/* int main(void)
{
	int factorial = 6;
	int result = ft_iterative_factorial(factorial);

	printf("%d\n", result);
	return 0;
} */