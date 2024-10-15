/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 18:22:47 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/28 13:37:40 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		*array;
	int		i;
	int		size_array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size_array = max - min;
	array = (int *)malloc(size_array * sizeof(int));
	if (array == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size_array)
	{
		array[i] = min;
		i++;
		min++;
	}
	*range = array;
	return (size_array);
}

/* #include <stdio.h>

int main(int ac, char **av)
{
	if (ac ==3)
	{
		int	min = atoi(av[1]);
		int	max = atoi(av[2]);
		int	*result;
		int size = ft_ultimate_range(&result, min, max);

		if (size == -1)
		{
			printf("Memory allocation failed\n");
			return 1;
		}
		else if (size == 0)
		{
			printf("Invalid range\n");
		}
		else
		{
			printf("Result: ");
			for (int i = 0; i < size; i++)
			{
				printf("%d ", result[i]);
			}
			printf("\n");

			free(result);
		}
	}
	return (0);
} */