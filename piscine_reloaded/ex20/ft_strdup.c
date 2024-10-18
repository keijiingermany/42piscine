/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:32:39 by kuehara           #+#    #+#             */
/*   Updated: 2024/10/16 17:54:08 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*temp;
	char	*dup;

	len = 0;
	while (src[len])
		len++;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	temp = dup;
	while (*src)
	{
		*temp++ = *src++;
	}
	*temp = '\0';
	return (dup);
}

/* int	main(void)
{
	char	str[] = "Hello";
	char	*result = ft_strdup(str);

	printf("%s\n", result);
	printf("%s\n", &result);
	free(result);
	return (0);
}
 */