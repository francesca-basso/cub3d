/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stribuzi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/25 15:15:16 by stribuzi          #+#    #+#             */
/*   Updated: 2021/03/30 10:13:38 by stribuzi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

void	bubble_support(t_p *p, double *sprite_distance, int i, int j)
{
	double	swap;
	int		swap_x;
	int		swap_y;

	swap = sprite_distance[i];
	sprite_distance[i] = sprite_distance[j];
	swap_x = p->sprites[i][0];
	swap_y = p->sprites[i][1];
	p->sprites[i][0] = p->sprites[j][0];
	p->sprites[i][1] = p->sprites[j][1];
	p->sprites[j][0] = swap_x;
	p->sprites[j][1] = swap_y;
	sprite_distance[j] = swap;
}

void	bubble_sort_trid(t_p *p, double *sprite_distance)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (i < p->num_of_sprites)
	{
		j = i + 1;
		while (j < p->num_of_sprites)
		{
			if (sprite_distance[i] > sprite_distance[j])
			{
				bubble_support(p, sprite_distance, i, j);
			}
			j++;
		}
		i++;
	}
}

void	sort_trid(t_p *p, double *sprite_distance)
{
	double	helper;
	int		helper_x;
	int		helper_y;
	int		index;

	index = 0;
	while (index < p->num_of_sprites / 2)
	{
		helper = sprite_distance[index];
		helper_x = p->sprites[index][0];
		helper_y = p->sprites[index][1];
		sprite_distance[index] = sprite_distance[p->num_of_sprites - 1 - index];
		p->sprites[index][0] = p->sprites[p->num_of_sprites - 1 - index][0];
		p->sprites[index][1] = p->sprites[p->num_of_sprites - 1 - index][1];
		p->sprites[p->num_of_sprites - 1 - index][0] = helper_x;
		p->sprites[p->num_of_sprites - 1 - index][1] = helper_y;
		sprite_distance[p->num_of_sprites - 1 - index] = helper;
		index++;
	}
}
