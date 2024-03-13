/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:09:32 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/11 07:12:50 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mondatory/push_swap.h"

// This function checks if commands and stack are valid.
// If yes and stack is sorted, print "OK" else "KO".
void	ft_check_0(t_stack **s_a, t_stack **s_b, char *move)
{
	char	*temp;

	while (move && *move != '\n')
	{
		temp = move;
		move = ft_check_1(s_a, s_b, move);
		free(temp);
	}
	if (*s_b)
		write(1, "KO\n", 3);
	else if (!ft_sorted(*s_a))
		write(1, "KO\n", 3);
	else
		write(1, "OK\n", 3);
	free(move);
}

// This function reads the moves and checks if command are valid.
// If yes, executes the command.
char	*ft_check_1(t_stack **s_a, t_stack **s_b, char *move)
{
	if (move[0] == 's' && move[1] == 'a' && move[2] == '\n')
		ft_sa(s_a, 1);
	else if (move[0] == 's' && move[1] == 'b' && move[2] == '\n')
		ft_sb(s_b, 1);
	else if (move[0] == 'p' && move[1] == 'a' && move[2] == '\n')
		ft_pa(s_a, s_b, 1);
	else if (move[0] == 'p' && move[1] == 'b' && move[2] == '\n')
		ft_pb(s_a, s_b, 1);
	else if (move[0] == 'r' && move[1] == 'a' && move[2] == '\n')
		ft_ra(s_a, 1);
	else if (move[0] == 'r' && move[1] == 'b' && move[2] == '\n')
		ft_rb(s_b, 1);
	else if (move[0] == 'r' && move[1] == 'r' && move[2] == '\n')
		ft_rr(s_a, s_b, 1);
	else if (move[0] == 's' && move[1] == 's' && move[2] == '\n')
		ft_ss(s_a, s_b, 1);
	else if (move[0] == 'r' && move[1] == 'r' && move[3] == '\n')
		ft_check_2(s_a, s_b, move);
	else
	{
		free(move);
		ft_errno_mess();
	}
	return (get_next_line(0));
}

void	ft_check_2(t_stack **s_a, t_stack **s_b, char *move)
{
	if (move[2] == 'a')
		ft_rra(s_a, 1);
	else if (move[2] == 'b')
		ft_rrb(s_b, 1);
	else if (move[2] == 'r')
		ft_rrr_0(s_a, s_b, 1);
	else
	{
		free(move);
		ft_errno_mess();
	}
}

int	main(int argc, char **argv)
{
	t_stack	*s_a;
	t_stack	*s_b;
	char	*move;

	if (argc > 1)
	{
		s_b = NULL;
		s_a = ft_take_args(argc, argv);
		if (!s_a || ft_dupli_check(s_a))
		{
			ft_free(&s_a);
			ft_errno_mess();
		}
		move = get_next_line(0);
		if (!move && !ft_sorted(s_a))
			write(1, "KO\n", 3);
		else if (!move && ft_sorted(s_a))
			write(1, "OK\n", 3);
		else
			ft_check_0(&s_a, &s_b, move);
		ft_free(&s_b);
		ft_free(&s_a);
		return (0);
	}
}
