/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_extra_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:09:58 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/10 10:09:59 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function checks if the stack is sorted.
int	ft_sorted(t_stack *s_a)
{
	int	i;

	i = s_a->data;
	while (s_a)
	{
		if (i > s_a->data)
			return (0);
		i = s_a->data;
		s_a = s_a->next;
	}
	return (1);
}

void	ft_free(t_stack **s_a)
{
	t_stack	*temp;

	while (*s_a)
	{
		temp = (*s_a)->next;
		(*s_a)->data = 0;
		free(*s_a);
		*s_a = temp;
	}
}

void	add_to_stack(char **argv, t_stack **s_a)
{
	long	i;

	i = 1;
	while (argv[i] != NULL)
	{
		ft_back_stack(s_a, ft_node(ft_atoi(argv[i])));
		i++;
	}
}

t_stack	*ft_node(int nbr)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		ft_errno_mess();
	new->data = nbr;
	new->next = NULL;
	return (new);
}

void	ft_back_stack(t_stack **s_a, t_stack *new)
{
	if (!s_a)
		return ;
	if (!*s_a)
		*s_a = new;
	else
		(ft_stack_end(*s_a)->next) = new;
}
