/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 14:18:54 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/08 09:59:09 by myerrou          ###   ########.fr       */
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
/*
int	main(void)
{
	const char *str1 = "-1"; // Invalid Input
	const char *str2 = "   --++--54321";  // invalid input
	const char *str3 = "-123456hhsg";

	int result1 = ft_atoi(str1);
	int result2 = ft_atoi(str2);
	int result3 = ft_atoi(str3);

	printf("Result 1: %d\n", result1);
	printf("Result 2: %d\n", result2);
	printf("Result 3: %d\n\n\n\n", result3);

	int resul1 = atoi(str1);
	int resul2 = atoi(str2);
	int resul3 = atoi(str3);

	printf("Result 1: %d\n", resul1);
	printf("Result 2: %d\n", resul2);
	printf("Result 3: %d\n", resul3);
}*/