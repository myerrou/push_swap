/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:18:54 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/10 10:34:11 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mondatory/push_swap.h"

static int	checker(char *str, int s, unsigned long long nb)
{
	while ((*str > 8 && *str < 14) || *str == 32)
		str++;
	if (*str == '-')
	{
		s = -1;
		str++;
	}
	else if (*str == '+')
	{
		s = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nb = (nb * 10) + (*str - '0');
		if (nb > LLONG_MAX)
			return (-1 * (s == 1));
		str++;
	}
	return (nb * s);
}

int	ft_atoi(const char *str)
{
	size_t	nb;
	int		s;

	s = 1;
	nb = 0;
	return (checker((char *)str, s, nb));
}
