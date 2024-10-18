/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 10:22:56 by kuehara           #+#    #+#             */
/*   Updated: 2024/10/16 10:46:27 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (*str)
	{
		length++;
		str++;
	}
	return (length);
}

/* #include <string.h>
int	main(void)
{
	char	str[] = "Hello world!";

	printf("%d\n", ft_strlen(str));
	printf("%d\n", strlen(str));
	return (0);
} */
