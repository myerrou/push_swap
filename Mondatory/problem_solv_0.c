/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   problem_solv_0.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:10:24 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/10 10:41:37 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// These functions calculate times 
// we should rotate the stacks .
// Because after some rotates, we will proceed only with one
// rotation. Since here we have reverse rotate,rather than index number,
// we check reverse index number which is 
// calculated by ft_stack_size - "index".
// "index" can be ft_track_b or ft_i_fetch
int	ft_rarb_solb(t_stack *s_a, t_stack *s_b, int c)
{
	int	i;

	i = ft_track_b(s_b, c);
	if (i < ft_i_fetch(s_a, c))
		i = ft_i_fetch(s_a, c);
	return (i);
}

int	ft_rarrb_solb(t_stack *s_a, t_stack *s_b, int c)
{
	int	i;

	i = 0;
	if (ft_track_b(s_b, c))
		i = ft_stack_size(s_b) - ft_track_b(s_b, c);
	i = ft_i_fetch(s_a, c) + i;
	return (i);
}

int	ft_rrarb_solb(t_stack *s_a, t_stack *s_b, int c)
{
	int	i;

	i = 0;
	if (ft_i_fetch(s_a, c))
		i = ft_stack_size(s_a) - ft_i_fetch(s_a, c);
	i = ft_track_b(s_b, c) + i;
	return (i);
}

int	ft_rrarrb_solb(t_stack *s_a, t_stack *s_b, int c)
{
	int	i;

	i = 0;
	if (ft_track_b(s_b, c))
		i = ft_stack_size(s_b) - ft_track_b(s_b, c);
	if ((i < (ft_stack_size(s_a) - ft_i_fetch(s_a, c))) && ft_i_fetch(s_a, c))
		i = ft_stack_size(s_a) - ft_i_fetch(s_a, c);
	return (i);
}
