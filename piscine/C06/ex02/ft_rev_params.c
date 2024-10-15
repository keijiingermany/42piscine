/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 08:18:02 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/25 11:13:35 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*arv;

	if (argc > 1)
	{
		i = argc - 1;
		while (i > 0)
		{
			arv = argv[i];
			while (*arv != '\0')
			{
				write(1, arv, 1);
				arv++;
			}
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
