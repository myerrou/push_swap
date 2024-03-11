/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_all_sorting.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:09:47 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/11 07:17:26 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function sort and push to stacks till 3 numbers left.
void	ft_b3_sorting(t_stack **s_a, t_stack **s_b)
{
	int		i;
	t_stack	*temp;

	while (ft_stack_size(*s_a) > 3 && !ft_sorted(*s_a))
	{
		temp = *s_a;
		i = ft_ab_root(*s_a, *s_b);
		while (i >= 0)
		{
			if (i == ft_rarb_solb(*s_a, *s_b, temp->data))
				i = ft_do_rarb(s_a, s_b, temp->data, 'a');
			else if (i == ft_rrarrb_solb(*s_a, *s_b, temp->data))
				i = ft_do_rrarrb(s_a, s_b, temp->data, 'a');
			else if (i == ft_rarrb_solb(*s_a, *s_b, temp->data))
				i = ft_do_rarrb(s_a, s_b, temp->data, 'a');
			else if (i == ft_rrarb_solb(*s_a, *s_b, temp->data))
				i = ft_do_rrarb(s_a, s_b, temp->data, 'a');
			else
				temp = temp->next;
		}
	}
}

// This function one by one pushes all the elements
// in s_a to s_b, until only three elements
// are left in s_a. It makes sure if
// s_b is sorted. When three elements are left,
// it calls the ft_3_sort function to sort what's left.
t_stack	*s_b_sort(t_stack **s_a)
{
	t_stack	*s_b;

	s_b = NULL;
	if (ft_stack_size(*s_a) > 3 && !ft_sorted(*s_a))
		ft_pb(s_a, &s_b, 0);
	if (ft_stack_size(*s_a) > 3 && !ft_sorted(*s_a))
		ft_pb(s_a, &s_b, 0);
	if (ft_stack_size(*s_a) > 3 && !ft_sorted(*s_a))
		ft_b3_sorting(s_a, &s_b);
	if (!ft_sorted(*s_a))
		ft_3_sort(s_a);
	return (s_b);
}

// if s_b not empty This function is pushing from s_b to s_a.
t_stack	**s_a_sort(t_stack **s_a, t_stack **s_b)
{
	int		i;
	t_stack	*temp;

	while (*s_b)
	{
		temp = *s_b;
		i = ft_ba_root(*s_a, *s_b);
		while (i >= 0)
		{
			if (i == ft_rarb_sola(*s_a, *s_b, temp->data))
				i = ft_do_rarb(s_a, s_b, temp->data, 'b');
			else if (i == ft_rarrb_sola(*s_a, *s_b, temp->data))
				i = ft_do_rarrb(s_a, s_b, temp->data, 'b');
			else if (i == ft_rrarrb_sola(*s_a, *s_b, temp->data))
				i = ft_do_rrarrb(s_a, s_b, temp->data, 'b');
			else if (i == ft_rrarb_sola(*s_a, *s_b, temp->data))
				i = ft_do_rrarb(s_a, s_b, temp->data, 'b');
			else
				temp = temp->next;
		}
	}
	return (s_a);
}

// This function sorts s_a if there are more
// than 2 elements in s_a.
// And finally it makes final sort in s_a after
// all values pushed to s_b, sorted and pushed
// back to s_a. Because, s_a is
// sorted at the end, the minimum number have to
// be at the top of s_a. it simply brings
// the smallest number in s_a to the top.
void	ft_all_sort(t_stack **s_a)
{
	t_stack	*s_b;
	int		i;

	s_b = NULL;
	if (ft_stack_size(*s_a) == 2)
		ft_sa(s_a, 0);
	else
	{
		s_b = s_b_sort(s_a);
		s_a = s_a_sort(s_a, &s_b);
		i = ft_i_fetch(*s_a, ft_min(*s_a));
		if (i < ft_stack_size(*s_a) - i)
		{
			while ((*s_a)->data != ft_min(*s_a))
				ft_ra(s_a, 0);
		}
		else
		{
			while ((*s_a)->data != ft_min(*s_a))
				ft_rra(s_a, 0);
		}
	}
}

// do the sorting while 3 elements in stack.
void	ft_3_sort(t_stack **s_a)
{
	if (ft_min(*s_a) == (*s_a)->data)
	{
		ft_rra(s_a, 0);
		ft_sa(s_a, 0);
	}
	else if (ft_max(*s_a) == (*s_a)->data)
	{
		ft_ra(s_a, 0);
		if (!ft_sorted(*s_a))
			ft_sa(s_a, 0);
	}
	else
	{
		if (ft_i_fetch(*s_a, ft_max(*s_a)) == 1)
			ft_rra(s_a, 0);
		else
			ft_sa(s_a, 0);
	}
}
