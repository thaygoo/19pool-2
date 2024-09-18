# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hburton <hburton@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/09/18 14:57:40 by hburton           #+#    #+#              #
#    Updated: 2024/09/18 14:58:28 by hburton          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Werror -Wextra -c *.c
ar rc libft.a *.o