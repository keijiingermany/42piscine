/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 08:17:52 by kuehara           #+#    #+#             */
/*   Updated: 2024/07/25 11:12:00 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*program_name;

	program_name = argv[0];
	(void) argc;
	while (*program_name != '\0')
	{
		write(1, program_name, 1);
		program_name++;
	}
	write(1, "\n", 1);
	return (0);
}
