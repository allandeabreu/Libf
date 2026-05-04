/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:09:56 by allanbreu         #+#    #+#             */
/*   Updated: 2026/05/04 16:23:24 by allferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d_len;
	size_t	s_len;
	size_t	c_2;

	d_len = 0;
	s_len = 0;
	c_2 = 0;
	while (dst[d_len] != '\0')
	{
		d_len++;
	}
	while (src[s_len] != '\0')
	{
		s_len++;
	}
	if (d_len >= size)
		return (size + s_len);
	while (src[c_2] != '\0' && (c_2 + d_len) < (size - 1))
	{
		dst[d_len + c_2] = src[c_2];
		c_2++;
	}
	dst[c_2 + d_len] = '\0';
	return (d_len + s_len);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	dst1[5] = "abc";
// 	char	src1[5] = "def";
// 	size_t	size;

// 	size = 5;
// 	printf("O tamanho total eh:\n%zu", ft_strlcat(dst1, src1, size));
// }
