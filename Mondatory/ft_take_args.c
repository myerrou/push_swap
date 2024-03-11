/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:10:11 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/11 08:31:37 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This Function is a custom atoi .
int	ft_atoya(const char *s)
{
	int				mod;
	long long int	i;

	i = 0;
	mod = 1;
	while (*s == ' ' || *s == '\t' || *s == '\n' || *s == '\f' || *s == '\v'
		|| *s == '\r')
		s++;
	if (*s == '-')
	{
		mod = -1;
		s++;
	}
	else if (*s == '+')
		s++;
	while (*s)
	{
		if (!digit(*s))
			ft_errno_mess();
		i = i * 10 + (*s - 48);
		s++;
	}
	if ((mod * i) > 2147483647 || (mod * i) < -2147483648)
		ft_errno_mess();
	return (mod * i);
}

t_stack	*ft_take_args(int argc, char **argv)
{
	t_stack	*s_a;
	int		i;
	char	***temp;

	i = 1;
	while (i < argc)
	{
		if (ft_strlen(argv[i]) == 0)
			ft_errno_mess();
		i++;
	}
	temp = NULL;
	s_a = NULL;
	temp = (char ***)malloc(argc * sizeof(char **));
	s_a = ft_spliter(argc, argv, s_a, temp);
	return (s_a);
}

t_stack	*ft_spliter(int argc, char **argv, t_stack *s_a, char ***temp)
{
	int	i;
	int	j;
	int	x;
	int	y;

	i = 1;
	x = 0;
	j = 0;
	while (i < argc)
	{
		temp[x] = ft_split(argv[i], ' ');
		y = 0;
		while (temp[x][y])
		{
			j = ft_atoya(temp[x][y]);
			ft_back_stack(&s_a, ft_node(j));
			y++;
		}
		x++;
		i++;
	}
	return (s_a);
}
