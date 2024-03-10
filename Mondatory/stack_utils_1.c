/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:10:40 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/10 10:10:41 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_i_fetch(t_stack *a, int data)
{
	int	i;

	i = 0;
	while (a->data != data)
	{
		i++;
		a = a->next;
	}
	return (i);
}

// This function finds the correct place of the number in s_a.
int	ft_track_a(t_stack *s_a, int nbr)
{
	int		i;
	t_stack	*temp;

	i = 1;
	if (nbr < s_a->data && nbr > ft_stack_end(s_a)->data)
		i = 0;
	else if (nbr > ft_max(s_a) || nbr < ft_min(s_a))
		i = ft_i_fetch(s_a, ft_min(s_a));
	else
	{
		temp = s_a->next;
		while (s_a->data > nbr || temp->data < nbr)
		{
			s_a = s_a->next;
			temp = s_a->next;
			i++;
		}
	}
	return (i);
}

// This function finds the correct place of the number in s_b.
int	ft_track_b(t_stack *s_b, int nbr)
{
	int		i;
	t_stack	*temp;

	i = 1;
	if (nbr > s_b->data && nbr < ft_stack_end(s_b)->data)
		i = 0;
	else if (nbr > ft_max(s_b) || nbr < ft_min(s_b))
		i = ft_i_fetch(s_b, ft_max(s_b));
	else
	{
		temp = s_b->next;
		while (s_b->data < nbr || temp->data > nbr)
		{
			s_b = s_b->next;
			temp = s_b->next;
			i++;
		}
	}
	return (i);
}
