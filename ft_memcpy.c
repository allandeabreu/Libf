/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:01:36 by allferna          #+#    #+#             */
/*   Updated: 2026/04/28 19:08:17 by allferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stddef.h>

void	*ft_memcpy(void *dest, const char *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;
	size_t				i;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}
#include <stdio.h>

int	main(void)
{
    char srcA[50]= "abcdef";
    char srcB[50]= "abcdef";

    printf("\t  %s\n", srcA);
	printf("src < dest = %s\n", (char *)ft_memcpy(srcA, &srcA[2], 6));
	printf("src > dest = %s\n", (char *)ft_memcpy(&srcB[2], srcB, 6));

}
