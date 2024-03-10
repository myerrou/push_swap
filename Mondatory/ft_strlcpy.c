/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myerrou <myerrou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:34:58 by myerrou           #+#    #+#             */
/*   Updated: 2024/03/08 10:00:04 by myerrou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Mondatory/push_swap.h"

size_t	ft_strlcpy(char *dst, char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize != 0)
	{
		while ((src[i] != '\0') && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}
// int	main(void)
// {
// 	// char	*dest;
// 	strlcpy(NULL, "lorem ipsum dolor sit amet", 0);
// 	// printf("%lu\n", ft_strlcpy(dest, "lorem ipsum dolor sit amet", 15));
// 	// write(1, "\n", 1);
// 	// write(1, dest, 15);
// }