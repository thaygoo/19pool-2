/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:23:30 by huburton          #+#    #+#             */
/*   Updated: 2024/09/21 20:24:31 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/rush02.h"

int	open_file(const char *filename)
{
	int	fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Error: could not open the file\n");
		return (-1);
	}
	return (fd);
}

int	read_from_file(int fd, char *buffer, int buffer_size)
{
	int	ret;

	ret = read(fd, buffer, buffer_size);
	if (ret == -1)
	{
		ft_putstr("Error: could not read from the file\n");
		return (-1);
	}
	return (ret);
}

void	ft_find_word(char *filename, char *input_word)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*word1;
	char	*word2;
	int		fd;
	int		ret;
	int		i;
	int		start;

	fd = open_file(filename);
	ret = read_from_file(fd, buffer, BUFFER_SIZE);
	while (ret > 0)
	{
		buffer[ret] = '\0';
		i = 0;
		while (buffer[i])
		{
			start = i;
			while (buffer[i] && buffer[i] != ' ' && buffer[i] != ':')
				i++;
			if (buffer[i] == ':')
			{
				word1 = ft_strdup(&buffer[start]);
				word1[i - start] = '\0';
				i += 2;
				start = i;
				while (buffer[i] && buffer[i] != '\n')
					i++;
				word2 = ft_strdup(&buffer[start]);
				word2[i - start] = '\0';
				if (ft_strncmp(input_word, word1, ft_strlen(input_word)) == 0)
				{
					ft_putstr(word2);
					ft_putstr("\n");
					free(word1);
					free(word2);
					close(fd);
					return ;
				}
				free(word1);
				free(word2);
			}
			while (buffer[i] && buffer[i] != '\n')
				i++;
			i++;
		}
	}
	ft_putstr("Word not found\n");
	close(fd);
}

int	main(int argc, char **argv)
{
	if (argc == 2) // Use default Dict (numbers.dict)
		ft_find_word("numbers.dict", argv[1]);
	else if (argc == 3) // Use custom Dict
		ft_find_word(argv[1], argv[2]);
	else
		ft_putstr("You need between one or two arguments.\n");
	return (0);
}

/* 
 - IF NUMBER IS NEGATIF RETURN "Error" 
 - Parse the dictionnary
 - FREE THE MALLOC !!!!!
 - 
*/