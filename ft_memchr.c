/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 19:38:50 by allferna          #+#    #+#             */
/*   Updated: 2026/05/04 20:47:37 by allferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	s;
	size_t			i;

	i = 0;
	while (i < n && s[i] != '\0')
	{
		if (s[i] == c)
		{
			return
		}
		i++;
	}
	return ()
}
int	main(void)
{
	char	s[] = "Hello UORDI";

	printf("Found:%s", ft_memchr(s, "U", 5));
	return (0);
}
