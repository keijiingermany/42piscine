/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:01:53 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/15 14:43:48 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* #include <stdio.h>

int main(void)
{
	int a;
	int b;
	int div;
	int mod;
	int *pd;
	int *pm;

	a = 7;
	b = 7;
	pd = &div;
	pm = &mod;
	

	ft_div_mod(a, b, pd, pm);

	printf("a: %d, b: %d, div: %d, mod: %d",a,b,div,mod);
	return (0);

} */