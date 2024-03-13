/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 10:33:00 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/13 10:06:19 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mondatory/push_swap.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	i;

	i = 0;
	dup = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (dup == NULL)
		return (NULL);
	while (*s1)
		dup[i++] = *s1++;
	dup[i] = '\0';
	return (dup);
}
