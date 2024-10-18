/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 17:04:20 by kuehara           #+#    #+#             */
/*   Updated: 2024/10/15 11:06:22 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/* int main(void)
{
	int a = 5;
	int b = 2;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod);
	printf("div: %d, mod: %d\n",div, mod);
	return 0;
}
 */