/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huburton <huburton@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/21 17:51:32 by huburton          #+#    #+#             */
/*   Updated: 2024/09/21 18:32:14 by huburton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH02_H
# define RUSH02_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>

# define BUFFER_SIZE 1024

void	ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_strncmp(char *s1, char *s2, int n);
char	*ft_strdup(char *src);

#endif