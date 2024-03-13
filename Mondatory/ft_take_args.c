/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_take_args.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 10:10:11 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/13 10:06:03 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// This Function is a custom atoi .
int	ft_atoya(char ***temp, const char *s, int mod)
{
	long long int	i;

	i = 0;
	while (*s == ' ' || *s == '0')
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
		i = i * 10 + (*s - '0');
		s++;
	}
	if ((mod * i) > 2147483647 || (mod * i) < -2147483648)
		ft_fire(temp);
	return (mod * i);
}

t_stack	*ft_take_args(int argc, char **argv)
{
	t_stack	*s_a;
	int		i;
	char	***temp;

	i = 1;
	temp = NULL;
	s_a = NULL;
	temp = (char ***)malloc(argc * sizeof(char **));
	while (i < argc)
	{
		if (ft_strlen(argv[i]) == 0 || !check_args(argv, i))
			ft_errno_mess();
		i++;
	}
	s_a = ft_spliter(argc, argv, s_a, temp);
	free(temp);
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
			j = ft_atoya(temp, temp[x][y], 1);
			free(temp[x][y]);
			ft_back_stack(&s_a, ft_node(j));
			y++;
		}
		free(temp[x]);
		x++;
		i++;
	}
	return (s_a);
}

int	check_args(char **argv, int i)
{
	int	j;

	j = 0;
	while ((argv[i][j]))
	{
		if (digit(argv[i][j]))
		{
			return (1);
			break ;
		}
		j++;
	}
	return (0);
}

void	ft_fire(char ***temp)
{
	free(**temp);
	free(*temp);
	free(temp);
	ft_errno_mess();
}
