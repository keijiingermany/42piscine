/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 08:16:27 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/31 09:32:27 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

int	is_base_valid(char *base)
{
	char	*p;
	char	*q;
	int		len;

	len = ft_strlen(base);
	if (len < 2)
	{
		return (0);
	}
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
	int	index;

	index = 0;
	while (base[index])
	{
		if (base[index] == c)
		{
			return (index);
		}
		index++;
	}
	return (-1);
}

int	skip_sign_whitespaces(char **str)
{
	int	sign;

	sign = 1;
	while ((**str >= 9 && **str <= 13)
		|| **str == ' ' || **str == '-' || **str == '+')
	{
		if (**str == '-')
		{
			sign = sign * -1;
		}
		(*str)++;
	}
	return (sign);
}
