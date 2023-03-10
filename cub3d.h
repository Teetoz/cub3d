/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cub3d.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: talsaiaa <talsaiaa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 01:13:37 by talsaiaa          #+#    #+#             */
/*   Updated: 2023/03/14 14:08:15 by talsaiaa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CUB3D_H
# define CUB3D_H

extern int WIN_H;
extern int WIN_W;

# define FORWARD 13
# define BACKWARD 1
# define LEFT 0
# define RIGHT 2
# define LOOK_LEFT 123
# define LOOK_RIGHT 124

# include "mlx/mlx.h"
# include "Libft/libft.h"
# include <stdio.h>
# include <fcntl.h>

void	cu_print_error(char *msg);
void	cu_args_check(int ac, char *av);

#endif