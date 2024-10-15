/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 08:16:30 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/31 09:32:01 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str);
int	is_base_valid(char *base);
int	index_base(char c, char *base);
int	skip_sign_whitespaces(char **str);

int	ft_atoi_base(char *str, char *base)
{
	int	baselength;
	int	sign;
	int	index;
	int	result;

	baselength = ft_strlen(base);
	if (!is_base_valid(base))
	{
		return (0);
	}
	sign = skip_sign_whitespaces(&str);
	result = 0;
	while (*str)
	{
		index = index_base(*str, base);
		if (index == -1)
		{
			break ;
		}
		result = result * baselength + index;
		str++;
	}
	return (sign * result);
}

char	*allocate_result(int nbr, char *base, int *len)
{
	int		temp;
	int		baselength;
	char	*result;

	baselength = ft_strlen(base);
	temp = nbr;
	*len = 0;
	if (nbr < 0)
	{
		*len = 1;
	}
	while (temp)
	{
		temp = temp / baselength;
		(*len)++;
	}
	result = (char *)malloc((*len) + 1);
	result[*len] = '\0';
	return (result);
}

void	fill_result(char *result, int nbr, char *base, int len)
{
	int		baselength;
	int		sign;

	baselength = ft_strlen(base);
	sign = 1;
	if (nbr < 0)
	{
		sign = -1;
	}
	while (nbr)
	{
		result[--len] = base[sign * (nbr % baselength)];
		nbr = nbr / baselength;
	}
	if (sign == -1)
	{
		result[0] = '-';
	}
}

char	*convert_to_base(int nbr, char *base)
{
	int		len;
	char	*result;

	if (nbr == 0)
	{
		result = (char *)malloc(2);
		result[0] = base[0];
		result[1] = '\0';
		return (result);
	}
	result = allocate_result(nbr, base, &len);
	fill_result(result, nbr, base, len);
	return (result);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		number;
	char	*result;

	if (!is_base_valid(base_from) || !is_base_valid(base_to))
	{
		return (NULL);
	}
	number = ft_atoi_base(nbr, base_from);
	result = convert_to_base(number, base_to);
	return (result);
}
