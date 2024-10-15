/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:19:04 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/23 13:04:34 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	is_valid_base(char *base)
{
	char	*p;
	char	*q;

	if (ft_strlen(base) < 2)
		return (0);
	p = base;
	while (*p)
	{
		if (*p == '+' || *p == '-' || *p == ' ' || (*p >= 9 && *p <= 13))
			return (0);
		q = p + 1;
		while (*q)
		{
			if (*p == *q)
				return (0);
			q++;
		}
		p++;
	}
	return (1);
}

int	index_base(char c, char *base)
{
	char	*p;
	int		index;

	p = base;
	index = 0;
	while (*p)
	{
		if (*p == c)
			return (index);
		p++;
		index++;
	}
	return (-1);
}

void	skip_sign_whitespaces(char **str, int *sign)
{
	*sign = 1;
	while ((**str >= 9 && **str <= 13) || **str == ' ')
	{
		(*str)++;
	}
	while (**str == '+' || **str == '-')
	{
		if (**str == '-')
			*sign *= -1;
		(*str)++;
	}
}

int	ft_atoi_base(char *str, char *base)
{
	int	baselength;
	int	sign;
	int	index;
	int	result;

	baselength = ft_strlen(base);
	if (!is_valid_base(base))
		return (0);
	skip_sign_whitespaces(&str, &sign);
	result = 0;
	while (*str)
	{
		index = index_base(*str, base);
		if (index == -1)
			break ;
		result = result * baselength + index;
		str++;
	}
	return (sign * result);
}

/* #include <stdio.h>

int	 main(void)
{
	char base1[] = "0123456789";
	char base2[] = "01";
	char base3[] = "0123456789abcdef";
	char str1[] = "---01234 ";
	char str2[] = "---01010101snv";
	char str3[] = "--abc";

	int result1 = ft_atoi_base(str1, base1);
	int result2 = ft_atoi_base(str2, base2);
	int result3 = ft_atoi_base(str3, base3);

	printf("result1: %d\n", result1);
	printf("result2: %d\n", result2);
	printf("result3: %d\n", result3);
	
} */