/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:01:57 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/15 14:44:12 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/* #include <stdio.h>

int main(void)
{
	int a;
	int b;
	int *pa;
	int *pb;

	a = 7;
	b = 3;
	
	pa = &a;
	pb = &b;

	ft_ultimate_div_mod(pa, pb);
	printf("a: %d, b: %d", a, b);
	return (0);


} */