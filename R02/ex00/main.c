/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 15:23:30 by huburton          #+#    #+#             */
/*   Updated: 2024/09/21 17:58:46 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_find_word(char *filename, char *input_word)
{
	int		fd;
	int		ret;
	char	buffer[BUFFER_SIZE + 1];
	char	*word1;
	char	*word2;
	int		i;
	int		start;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("Error: could not open the file\n");
		return ;
	}
	ret = read(fd, buffer, BUFFER_SIZE);
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
	if (argc != 3)
	{
		ft_putstr("Usage: ./dictionary <file> <word>\n");
		return (1);
	}
	ft_find_word(argv[1], argv[2]);
	return (0);
}
