/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:38:58 by kuehara           #+#    #+#             */
/*   Updated: 2024/10/17 16:35:32 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

/* #include <unistd.h>
#include <stdio.h>

void	ft_double(int n)
{
	int	result = n*2;
	printf("%d\n", result);
	
}


int	main (void)
{
	int	tab[] = {1,2,3,4,5};
	int	length = sizeof (tab) / sizeof (tab[0]);

	ft_foreach(tab, length, &ft_double);
	return 0;
	
} */