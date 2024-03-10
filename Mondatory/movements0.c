/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements0.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:10:14 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/10 10:10:15 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pa(t_stack **s_a, t_stack **s_b, int x)
{
	t_stack	*temp;

	if (!*s_b)
		return ;
	temp = *s_a;
	*s_a = *s_b;
	*s_b = (*s_b)->next;
	(*s_a)->next = temp;
	if (x == 0)
		write(1, "pa\n", 3);
}

void	ft_pb(t_stack **s_a, t_stack **s_b, int x)
{
	t_stack	*temp;

	if (!*s_a)
		return ;
	temp = *s_b;
	*s_b = *s_a;
	*s_a = (*s_a)->next;
	(*s_b)->next = temp;
	if (x == 0)
		write(1, "pb\n", 3);
}

void	ft_sa(t_stack **s_a, int x)
{
	t_stack	*temp;

	if (!*s_a || !((*s_a)->next))
		return ;
	temp = *s_a;
	*s_a = (*s_a)->next;
	temp->next = (*s_a)->next;
	(*s_a)->next = temp;
	if (x == 0)
		write(1, "sa\n", 3);
}

void	ft_sb(t_stack **s_b, int x)
{
	t_stack	*temp;

	if (!*s_b || !((*s_b)->next))
		return ;
	temp = *s_b;
	*s_b = (*s_b)->next;
	temp->next = (*s_b)->next;
	(*s_b)->next = temp;
	if (x == 0)
		write(1, "sb\n", 3);
}
