/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 11:46:34 by allanbreu         #+#    #+#             */
/*   Updated: 2026/05/05 13:12:27 by allferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	size_t				i;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (str1[i] == str2[i] && n > 0)
	{
		i++;
		n--;
	}
	return (str1[i] - str2[i]);
}

// #include <stdio.h>
// int main()
// {
//     int resultado;

//     resultado = ft_memcmp("hellzoo", "hello", 4);
//     if (resultado == 0)
//         printf("Elas sao iguais\n");
//     else if (resultado > 0)
//         printf("s1 eh maior que s2\n");
//     else
//         printf("s2 eh maior que s1\n");
//     return (0);
// }
