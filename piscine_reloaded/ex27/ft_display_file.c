/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kuehara <kuehara@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:44:01 by kuehara           #+#    #+#             */
/*   Updated: 2024/10/17 17:53:49 by kuehara          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h> 

#define BUFFER_SIZE 1024

void	ft_putstr(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

int	ft_read_and_display(int fd)
{
	int		ret;
	char	buffer[BUFFER_SIZE];

	ret = read(fd, buffer, BUFFER_SIZE);
	while (ret > 0)
	{
		write(1, buffer, ret);
		ret = read(fd, buffer, BUFFER_SIZE);
	}
	if (ret == -1)
		return (-1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc == 1)
	{
		ft_putstr(2, "File name missing.\n");
		return (1);
	}
	if (argc > 2)
	{
		ft_putstr(2, "Too many arguments.\n");
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		ft_putstr(2, "Cannot read file.\n");
		return (1);
	}
	if (ft_read_and_display(fd) == -1)
		ft_putstr(2, "Cannot read file.\n");
	close(fd);
	return (0);
}
