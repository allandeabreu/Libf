/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 19:38:50 by allferna          #+#    #+#             */
/*   Updated: 2026/05/05 13:12:47 by allferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned int	i;
	unsigned char	uc;

	str = (unsigned char *)s;
	uc = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (str[i] == uc)
		{
			return ((void *)&str[i]);
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	s[] = "Hello UORDI";

// 	printf("Found:%s", ft_memchr(s, 'U', 10));
// 	return (0);
// }
