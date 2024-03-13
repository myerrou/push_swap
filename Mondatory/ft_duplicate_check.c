/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_duplicate_check.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:09:55 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/13 10:08:42 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This function checks if there are duplicates
int	ft_dupli_check(t_stack *s_a)
{
	t_stack	*temp;

	while (s_a)
	{
		temp = s_a->next;
		while (temp)
		{
			if (s_a->data == temp->data)
				return (1);
			temp = temp->next;
		}
		s_a = s_a->next;
	}
	return (0);
}

void	ft_errno_mess(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
