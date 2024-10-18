/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:37:14 by kuehara           #+#    #+#             */
/*   Updated: 2024/10/17 17:27:16 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int (*f)(char *))
{
	int	count;

	count = 0;
	while (*tab != 0)
	{
		if (f(*tab) == 1)
			count++;
		tab++;
	}
	return (count);
}

/* int	starts_with_a(char *str)
{
	if (str[0] == 'a')
		return (1);
	return (0);
}

#include <stdio.h>

int	main(void)
{
	char	*tab[] = {"apple", "banana", "ape", "avocado", "monkey", 0};
	int	result = ft_count_if(tab, &starts_with_a);

	printf("%d\n", result);
	return (0);
}
 */