/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 10:02:06 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/15 14:47:26 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

/* #include <stdio.h>

int main(void)
{
	char *message = "abcdefghijklmnopqrstuvwxyz";
	int l = ft_strlen(message);
	printf ("length: %d\n", l);
	return (0);
} */