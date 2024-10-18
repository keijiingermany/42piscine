/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 16:47:35 by kuehara           #+#    #+#             */
/*   Updated: 2024/10/15 14:35:08 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

/* int main (void)
{
	int a=7;
	int *ptr1;
	int b=3;
	int *ptr2;

	ptr1 = &a;
	ptr2 = &b;
	
	ft_swap(ptr1, ptr2);
	printf("%d, %d\n", a, b);
	return 0;
	
 } */ 