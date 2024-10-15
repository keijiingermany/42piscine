/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:18:41 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/22 10:26:17 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

/* #include <stdio.h>
#include <string.h>

int main() {
    char test_str[] = "Hello, world!";
    int len = ft_strlen(test_str);
    printf("Length of '%s' is: %d\n", test_str, len);

    int std_len = strlen(test_str);
    printf("strlen result: %d\n", std_len);

    if (len == std_len) {
        printf("Correct.\n");
    } else {
        printf("Incorrect.\n");
    }

    return 0;
}
 */