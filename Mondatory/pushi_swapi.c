/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushi_swapi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:09:13 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/13 10:05:38 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*s_a;

	if (argc > 1)
	{
		s_a = ft_take_args(argc, argv);
		if (!s_a || ft_dupli_check(s_a))
		{
			ft_free(&s_a);
			ft_errno_mess();
		}
		if (!ft_sorted(s_a))
		{
			ft_all_sort(&s_a);
		}
		ft_free(&s_a);
	}
	return (0);
}
