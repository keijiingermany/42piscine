/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:02:13 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/15 18:34:29 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	*end;
	int	*ptr;

	end = tab + size - 1;
	while (tab < end)
	{
		ptr = tab;
		while (ptr < end)
		{
			if (*ptr > *(ptr +1))
			{
				temp = *ptr;
				*ptr = *(ptr +1);
				*(ptr + 1) = temp;
			}
			ptr++;
		}
		end--;
	}
}

/* #include <stdio.h>

int main(void)
{
	int tab[] = {7, 5, 1, 3, 2, 4, 6};
	int size = 7;
	int i;

	printf("original: ");
	i = 0;
	while (i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");

	ft_sort_int_tab(tab,size);

	printf("Sorted: ");
	i = 0;
	while(i < size)
	{
		printf("%d", tab[i]);
		i++;
	}
	printf("\n");
	return (0);
} */