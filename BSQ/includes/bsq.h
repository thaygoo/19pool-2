/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 09:10:53 by mwattier          #+#    #+#             */
/*   Updated: 2024/09/25 19:19:52 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

// includes

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

// structure that take params of map file

typedef struct Params
{
	int		lenx;
	int		leny;
	char	cempty;
	char	cobstacle;
	char	cfull;
}	t_params;

// Structure that stock value about our square

typedef struct square
{
	int	x;
	int	y;
	int	size;
}	t_square;

// struct that stock double arrays

typedef struct map
{
	int	**map;
	int	**algo;
}	t_map;

//functions

void	ft_putstr(char *str);
void	ft_puterr(char *str);
char	*ft_strcat(char *dest, char *src);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		check_map(char *map, t_params *param);
char	*ft_strjoin(int size, char *str1, char *str2);
char	*ft_read_0(char *map);
char	*ft_read_file(char *str, char *dict);
int		fill_struct(t_params *param, char *str);
char	*rem_1st_line(char *str);
void	algo(char *map, t_params *param);
int		cart_to_i(int x, int y, char *map, t_params *param);
int		fill_algo(int x, int y, t_map *new_map);
int		min3(int a, int b, int c);
void	ft_putchar(char c);
void	display(t_map *new_map, t_square *square, t_params *param);
void	fill_matrix(t_map *new_map, t_params *param, char *map);

#endif
