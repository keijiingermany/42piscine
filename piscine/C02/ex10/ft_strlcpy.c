/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 16:37:33 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/17 18:18:40 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	char			*src_ptr;

	src_len = 0;
	src_ptr = src;
	while (*src_ptr++)
		src_len++;
	if (size == 0)
		return (src_len);
	while (*src && size > 1)
	{
		*dest++ = *src++;
		size--;
	}
	if (size > 0)
		*dest = '\0';
	return (src_len);
}

/* #include <stdio.h>

int	main(void)
{
    char src[] = "Everyday is like Sunday!";
    char dest1[100];
    char dest2[100];
    unsigned int size = 20;
    unsigned int result1, result2;

    result1 = ft_strlcpy(dest1, src, size);
    
    result2 = strlcpy(dest2, src, size);

    printf("Using ft_strlcpy:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest1);
    printf("Length of Source: %u\n\n", result1);

    printf("Using original strlcpy:\n");
    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest2);
    printf("Length of Source: %u\n", result2);

    return 0;
} */