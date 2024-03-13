/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:10:17 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/10 10:10:18 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stack **s_a, int x)
{
	t_stack	*temp;

	if (!*s_a || !(*s_a)->next)
		return ;
	temp = *s_a;
	*s_a = ft_stack_end(*s_a);
	(*s_a)->next = temp;
	*s_a = temp->next;
	temp->next = NULL;
	if (x == 0)
		write(1, "ra\n", 3);
}

void	ft_rb(t_stack **s_b, int x)
{
	t_stack	*temp;

	if (!*s_b || !(*s_b)->next)
		return ;
	temp = *s_b;
	*s_b = ft_stack_end(*s_b);
	(*s_b)->next = temp;
	*s_b = temp->next;
	temp->next = NULL;
	if (x == 0)
		write(1, "rb\n", 3);
}

void	ft_rr(t_stack **s_a, t_stack **s_b, int x)
{
	t_stack	*temp;

	if (!*s_a || !((*s_a)->next))
		return ;
	temp = *s_a;
	*s_a = ft_stack_end(*s_a);
	(*s_a)->next = temp;
	*s_a = temp->next;
	temp->next = NULL;
	if (!*s_b || !((*s_b)->next))
		return ;
	temp = *s_b;
	*s_b = ft_stack_end(*s_b);
	(*s_b)->next = temp;
	*s_b = temp->next;
	temp->next = NULL;
	if (x == 0)
		write(1, "rr\n", 3);
}

void	ft_ss(t_stack **s_a, t_stack **s_b, int x)
{
	t_stack	*temp;

	if (!*s_a || !((*s_a)->next))
		return ;
	temp = *s_a;
	*s_a = (*s_a)->next;
	temp->next = (*s_a)->next;
	(*s_a)->next = temp;
	if (!*s_b || !((*s_b)->next))
		return ;
	temp = *s_b;
	*s_b = (*s_b)->next;
	temp->next = (*s_b)->next;
	(*s_b)->next = temp;
	if (x == 0)
		write(1, "ss\n", 3);
}
