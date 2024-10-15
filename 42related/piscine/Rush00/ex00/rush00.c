/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 09:36:10 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/14 10:32:12 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	draw_line(int lar, char f, char m, char l)
{
	int	j;

	j = 0;
	while (j < lar)
	{
		if (j == 0)
			ft_putchar(f);
		else
		{
			if (j == lar - 1)
				ft_putchar(l);
			else
				ft_putchar(m);
		}
		j++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	i;

	i = 0;
	if (x <= 0 || y <= 0)
		return ;
	while (i < y)
	{
		if (i == 0)
			draw_line(x, 'o', '-', 'o');
		else
		{
			if (i == y - 1)
				draw_line(x, 'o', '-', 'o');
			else
				draw_line(x, '|', ' ', '|');
		}
		i++;
	}
}
