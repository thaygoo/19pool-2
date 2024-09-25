/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:16:20 by huburton          #+#    #+#             */
/*   Updated: 2024/09/25 18:45:40 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

char	*ft_read_0(char *map)
{
	char	*buffer;
	ssize_t	bytes_read;

	map = (char *)malloc(sizeof(char));
	if (!map)
		return (0);
	buffer = (char *)malloc(4097);
	if (!buffer)
		return (0);
	map[0] = '\0';
	bytes_read = read(0, buffer, 4096);
	buffer[bytes_read] = '\0';
	while (bytes_read > 0)
	{
		map = ft_strjoin(bytes_read, map, buffer);
		bytes_read = read(0, buffer, 4096);
		buffer[bytes_read] = '\0';
	}
	free (buffer);
	return (map);
}

char	*ft_read_file2(int fd, char *str, char *buffer)
{
	ssize_t	bytes_read;

	bytes_read = read(fd, buffer, 4096);
	buffer[bytes_read] = '\0';
	while (bytes_read > 0)
	{
		str = ft_strjoin(bytes_read, str, buffer);
		bytes_read = read(fd, buffer, 4096);
		buffer[bytes_read] = '\0';
	}
	return (str);
}

char	*ft_read_file(char *str, char *name)
{
	char	*buffer;
	int		fd;

	fd = open(name, O_RDONLY);
	if (fd == -1)
	{
		ft_puterr("map error");
		return (0);
	}
	str = (char *)malloc(sizeof(char));
	str[0] = '\0';
	buffer = (char *)malloc(4097);
	if ((!str) || (!buffer))
	{
		ft_puterr("malloc error\n");
		close (fd);
		return (0);
	}
	str = ft_read_file2(fd, str, buffer);
	close(fd);
	free (buffer);
	return (str);
}
