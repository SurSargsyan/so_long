/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: susargsy <susargsy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 13:19:27 by susargsy          #+#    #+#             */
/*   Updated: 2025/01/23 13:19:27 by susargsy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "so_long.h"

int	key_press(int keycode, t_root *root)
{
	if (keycode == 65307)
		root_destroy(root, 0, 0);
	if (keycode == 119 || keycode == 65362)
		root->game->player_up = 1;
	if (keycode == 115 || keycode == 65364)
		root->game->player_down = 1;
	if (keycode == 97 || keycode == 65361)
		root->game->player_left = 1;
	if (keycode == 100 || keycode == 65363)
		root->game->player_right = 1;
	update(root);
	return (0);
}

int	key_release(int keycode, t_root *root)
{
	if (keycode == 119 || keycode == 65362)
		root->game->player_up = 0;
	if (keycode == 115 || keycode == 65364)
		root->game->player_down = 0;
	if (keycode == 97 || keycode == 65361)
		root->game->player_left = 0;
	if (keycode == 100 || keycode == 65363)
		root->game->player_right = 0;
	update(root);
	return (0);
}

int	destroy_hook(int keycode, t_root *root)
{
	(void)keycode;
	(void)root;
	root_destroy(0, 0, 0);
	return (0);
}
