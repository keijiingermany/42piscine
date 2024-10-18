/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 18:01:50 by kuehara           #+#    #+#             */
/*   Updated: 2024/10/16 18:26:53 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;
	int	size_array;

	if (min >= max)
		return (NULL);
	size_array = max - min;
	array = (int *)malloc(size_array * sizeof(int));
	i = 0;
	while (i < size_array)
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

/* int main(int ac, char **av)
{
	if (ac ==3)
	{
	int	min = atoi(av[1]);
	int	max = atoi(av[2]);
	int	*result = ft_range(min, max);

	if (result == NULL)
	{
		printf("Memory allocation failed or invalid range\n");
		return 1;
	}

		printf("Result: ");
		for (int i = 0; i < max - min; i++)
		{
			printf("%d ", result[i]);
		}
		printf("\n");

	}
	return 0;
} */