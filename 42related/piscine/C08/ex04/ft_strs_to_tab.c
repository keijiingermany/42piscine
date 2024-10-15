/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/27 16:46:14 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/29 14:43:12 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

#include "ft_stock_str.h"

int	ft_str_length(char *str)
{
	int	index;

	index = 0;
	while (str[index])
		index++;
	return (index);
}

char	*ft_strdup(char *src)
{
	int		index;
	char	*dest;

	index = 0;
	dest = (char *)malloc(ft_str_length(src) * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

t_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			index;
	t_stock_str	*array;

	ac = ac + 0;
	array = malloc((ac + 1) * sizeof(t_stock_str));
	if (!(array))
		return (NULL);
	index = 0;
	while (index < ac)
	{
		array[index].size = ft_str_length(av[index]);
		array[index].str = av[index];
		array[index].copy = ft_strdup(av[index]);
		index++;
	}
	array[index] = (t_stock_str){0, 0, 0};
	return (array);
}

/* int	main(int argc, char **argv)
{
	int			index;
	t_stock_str	*structs;

	structs = ft_strs_to_tab(argc, argv);
	index = 0;
	while (index < argc)
	{
		printf("%d\n", index);
		printf("\t| original : $%s$ @ %p\n", structs[index].str, 
		structs[index].str);
		printf("\t|   copied : $%s$ @ %p\n", structs[index].copy,
		structs[index].copy);
		printf("\t|     size : %d\n", structs[index].size);
		index++;
	}
}
 */