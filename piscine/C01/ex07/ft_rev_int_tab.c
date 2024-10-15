/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:02:10 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/15 18:35:26 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		i++;
		j--;
	}
}

/* #include <stdio.h>

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6};
	int size = 6;
	int i = 0;
	
	
	printf("original:");
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");

	ft_rev_int_tab(tab, size);

	i = 0;
	printf("Reversed: ");
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");

	return (0);
} */