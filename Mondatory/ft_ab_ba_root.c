/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ab_ba_root.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:09:43 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/10 10:09:44 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// These functions calculate and decide which rotation
// combination is best to use to sort the stack. Of
// course, after rotation there is always one push
// operation is left to do which i embeded to code.
// Function is used during push from B to A.

int	ft_ab_root(t_stack *s_a, t_stack *s_b)
{
	int		i;
	t_stack	*temp;

	temp = s_a;
	i = ft_rrarrb_solb(s_a, s_b, s_a->data);
	while (temp)
	{
		if (i > ft_rarb_solb(s_a, s_b, temp->data))
			i = ft_rarb_solb(s_a, s_b, temp->data);
		if (i > ft_rrarrb_solb(s_a, s_b, temp->data))
			i = ft_rrarrb_solb(s_a, s_b, temp->data);
		if (i > ft_rarrb_solb(s_a, s_b, temp->data))
			i = ft_rarrb_solb(s_a, s_b, temp->data);
		if (i > ft_rrarb_solb(s_a, s_b, temp->data))
			i = ft_rrarb_solb(s_a, s_b, temp->data);
		temp = temp->next;
	}
	return (i);
}

int	ft_ba_root(t_stack *s_a, t_stack *s_b)
{
	int		i;
	t_stack	*temp;

	temp = s_b;
	i = ft_rrarrb_sola(s_a, s_b, s_b->data);
	while (temp)
	{
		if (i > ft_rarb_sola(s_a, s_b, temp->data))
			i = ft_rarb_sola(s_a, s_b, temp->data);
		if (i > ft_rrarrb_sola(s_a, s_b, temp->data))
			i = ft_rrarrb_sola(s_a, s_b, temp->data);
		if (i > ft_rarrb_sola(s_a, s_b, temp->data))
			i = ft_rarrb_sola(s_a, s_b, temp->data);
		if (i > ft_rrarb_sola(s_a, s_b, temp->data))
			i = ft_rrarb_sola(s_a, s_b, temp->data);
		temp = temp->next;
	}
	return (i);
}
