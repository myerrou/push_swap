/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   movements2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:10:21 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/10 10:10:22 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stack **s_a, int x)
{
	t_stack	*temp;
	int		i;

	if (!*s_a || !(*s_a)->next)
		return ;
	i = 0;
	temp = *s_a;
	while ((*s_a)->next)
	{
		*s_a = (*s_a)->next;
		i++;
	}
	(*s_a)->next = temp;
	while (i > 1)
	{
		temp = temp->next;
		i--;
	}
	temp->next = NULL;
	if (x == 0)
		write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **s_b, int x)
{
	t_stack	*temp;
	int		i;

	if (!*s_b || !(*s_b)->next)
		return ;
	i = 0;
	temp = *s_b;
	while ((*s_b)->next)
	{
		i++;
		*s_b = (*s_b)->next;
	}
	(*s_b)->next = temp;
	while (i > 1)
	{
		temp = temp->next;
		i--;
	}
	temp->next = NULL;
	if (x == 0)
		write(1, "rrb\n", 4);
}

void	ft_rrr_0(t_stack **s_a, t_stack **s_b, int x)
{
	t_stack	*temp;
	int		i;

	if (!*s_a || !((*s_a)->next) || !*s_b || !((*s_b)->next))
		return ;
	i = 0;
	temp = *s_a;
	while ((*s_a)->next)
	{
		i++;
		*s_a = (*s_a)->next;
	}
	(*s_a)->next = temp;
	while (i > 1)
	{
		temp = temp->next;
		i--;
	}
	temp->next = NULL;
	ft_rrr_1(s_b, x);
}

void	ft_rrr_1(t_stack **s_b, int x)
{
	t_stack	*temp;
	int		i;

	i = 0;
	temp = *s_b;
	while ((*s_b)->next)
	{
		i++;
		*s_b = (*s_b)->next;
	}
	(*s_b)->next = temp;
	while (i > 1)
	{
		temp = temp->next;
		i--;
	}
	temp->next = NULL;
	if (x == 0)
		write(1, "rrr\n", 4);
}
