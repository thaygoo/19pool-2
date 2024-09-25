/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:13:06 by mwattier          #+#    #+#             */
/*   Updated: 2024/09/25 20:09:28 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/bsq.h"

int	program(t_params *param, char *map)
{
	if (fill_struct(param, map) == 0 || check_map(map, param) == 0)
		ft_puterr("map error\n");
	else
	{
		map = rem_1st_line(map);
		if (!map)
			ft_puterr("map error\n");
		algo(map, param);
		free(map);
	}
	return (0);
}

int	main(int ac, char **av)
{
	char			*map;
	struct Params	param;
	int				i;

	if (ac == 1)
	{
		map = ft_read_0(map);
		if (!map)
		{
			ft_puterr("map error\n");
			free(map);
			return (0);
		}
		program(&param, map);
	}
	i = 1;
	while (i < ac)
	{
		map = ft_read_file(map, av[i]);
		if (map)
			program(&param, map);
		i++;
	}
	return (0);
}
