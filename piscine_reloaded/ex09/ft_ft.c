/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:56:51 by kuehara           #+#    #+#             */
/*   Updated: 2024/10/15 11:03:46 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/* #include <stdio.h>
int main(void)
{
	int a = 0;
	int *ptr;
	ptr = &a;
	ft_ft(ptr);
	printf("%d\n", a);

	return 0;
} */