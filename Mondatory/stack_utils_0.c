/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_0.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:10:37 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/11 07:16:42 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_min(t_stack *s_a)
{
	int		i;

	i = s_a->data;
	while (s_a)
	{
		if (s_a->data < i)
			i = s_a->data;
		s_a = s_a->next;
	}
	return (i);
}

int	ft_max(t_stack *s_a)
{
	int		i;
	
	i = s_a->data;
	while (s_a)
	{
		if (s_a->data > i)
			i = s_a->data;
		s_a = s_a->next;
	}
	return (i);
}

// calculate the size of the stack
int	ft_stack_size(t_stack *stack)
{
	size_t	i;

	i = 0;
	while (stack)
	{
		stack = stack->next;
		i++;
	}
	return (i);
}

// go to the last node in the stack
t_stack	*ft_stack_end(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack->next)
		stack = stack->next;
	return (stack);
}
