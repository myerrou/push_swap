/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_root_push.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:09:39 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/10 10:09:40 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// These functions rotate both s_a and s_b in
// the same direction as required amount.
int	ft_do_rarb(t_stack **s_a, t_stack **s_b, int c, char s)
{
	if (s == 'a')
	{
		while ((*s_a)->data != c && ft_track_b(*s_b, c) > 0)
			ft_rr(s_a, s_b, 0);
		while ((*s_a)->data != c)
			ft_ra(s_a, 0);
		while (ft_track_b(*s_b, c) > 0)
			ft_rb(s_b, 0);
		ft_pb(s_a, s_b, 0);
	}
	else
	{
		while ((*s_b)->data != c && ft_track_a(*s_a, c) > 0)
			ft_rr(s_a, s_b, 0);
		while ((*s_b)->data != c)
			ft_rb(s_b, 0);
		while (ft_track_a(*s_a, c) > 0)
			ft_ra(s_a, 0);
		ft_pa(s_a, s_b, 0);
	}
	return (-1);
}

int	ft_do_rarrb(t_stack **s_a, t_stack **s_b, int c, char s)
{
	if (s == 'a')
	{
		while ((*s_a)->data != c)
			ft_ra(s_a, 0);
		while (ft_track_b(*s_b, c) > 0)
			ft_rrb(s_b, 0);
		ft_pb(s_a, s_b, 0);
	}
	else
	{
		while (ft_track_a(*s_a, c) > 0)
			ft_ra(s_a, 0);
		while ((*s_b)->data != c)
			ft_rrb(s_b, 0);
		ft_pa(s_a, s_b, 0);
	}
	return (-1);
}

int	ft_do_rrarb(t_stack **s_a, t_stack **s_b, int c, char s)
{
	if (s == 'a')
	{
		while ((*s_a)->data != c)
			ft_rra(s_a, 0);
		while (ft_track_b(*s_b, c) > 0)
			ft_rb(s_b, 0);
		ft_pb(s_a, s_b, 0);
	}
	else
	{
		while (ft_track_a(*s_a, c) > 0)
			ft_rra(s_a, 0);
		while ((*s_b)->data != c)
			ft_rb(s_b, 0);
		ft_pa(s_a, s_b, 0);
	}
	return (-1);
}

int	ft_do_rrarrb(t_stack **s_a, t_stack **s_b, int c, char s)
{
	if (s == 'a')
	{
		while ((*s_a)->data != c && ft_track_b(*s_b, c) > 0)
			ft_rrr_0(s_a, s_b, 0);
		while ((*s_a)->data != c)
			ft_rra(s_a, 0);
		while (ft_track_b(*s_b, c) > 0)
			ft_rrb(s_b, 0);
		ft_pb(s_a, s_b, 0);
	}
	else
	{
		while ((*s_b)->data != c && ft_track_a(*s_a, c) > 0)
			ft_rrr_0(s_a, s_b, 0);
		while ((*s_b)->data != c)
			ft_rrb(s_b, 0);
		while (ft_track_a(*s_a, c) > 0)
			ft_rra(s_a, 0);
		ft_pa(s_a, s_b, 0);
	}
	return (-1);
}
