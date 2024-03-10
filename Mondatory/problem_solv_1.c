/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   problem_solv_1.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:10:27 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/10 10:10:28 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// These functions calculate the required amount of rotation.
int	ft_rarb_sola(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_track_a(a, c);
	if (i < ft_i_fetch(b, c))
		i = ft_i_fetch(b, c);
	return (i);
}

int	ft_rarrb_sola(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_i_fetch(b, c))
		i = ft_stack_size(b) - ft_i_fetch(b, c);
	i = ft_track_a(a, c) + i;
	return (i);
}

int	ft_rrarb_sola(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_track_a(a, c))
		i = ft_stack_size(a) - ft_track_a(a, c);
	i = ft_i_fetch(b, c) + i;
	return (i);
}

int	ft_rrarrb_sola(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_track_a(a, c))
		i = ft_stack_size(a) - ft_track_a(a, c);
	if ((i < (ft_stack_size(b) - ft_i_fetch(b, c))) && ft_i_fetch(b, c))
		i = ft_stack_size(b) - ft_i_fetch(b, c);
	return (i);
}
