/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:18:57 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/23 09:45:02 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	result;

	sign = 1;
	result = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (sign * result);
}

/* #include <stdio.h>

int main(void)
{
	char str1[] = "  ---+--+1234ab567";
	char str2[] = "-+--0234";
	char str3[] = "--- 44  ";
	char str4[] = "+ABC1234";
	char str5[] = "-1234ABV";

	int result1 = ft_atoi(str1);
	int result2 = ft_atoi(str2);
	int result3 = ft_atoi(str3);
	int result4 = ft_atoi(str4);
	int result5 = ft_atoi(str5);

	printf("result1: %d\n", result1);
	printf("result2: %d\n", result2);
	printf("result3: %d\n", result3);
	printf("result4: %d\n", result4);
	printf("result5: %d\n", result5);

} */