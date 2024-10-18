/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 15:51:39 by kuehara           #+#    #+#             */
/*   Updated: 2024/10/15 16:21:07 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 1)
		return (0);
	else if (nb == 1)
		return (1);
	else
	{
		while (i <= (nb / 2))
		{
			if (i * i == nb)
				return (i);
			i++;
		}
		return (0);
	}
}

/* int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int n = atoi(av[1]);
		int result = ft_sqrt(n);
		printf("%d\n", result);
		return 0;
	}
} */