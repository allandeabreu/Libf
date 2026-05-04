/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:29:27 by allferna          #+#    #+#             */
/*   Updated: 2026/04/28 19:58:34 by allferna         ###   ########.fr       */
/*                                             eeeeeeeeeeeee                               */
/* ************************************************************************** */

#include <stddef.h>

int	ft_strlen(const char *str);
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char *d;
	unsigned char *s;
	size_t i;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;

	if (s > d)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = ft_strlen((const char *)s);
		while (i > 0 && n > 0)
		{
			d[i] = s[i];
			i--;
            n--;
		}
	}
    return (dest);
}
