/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:58:25 by allferna          #+#    #+#             */
/*   Updated: 2026/05/11 21:38:20 by allferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	void	*ptr;
	size_t	size;

	size = ft_strlen(s);
	ptr = malloc(size + 1);
	if (!ptr)
		return (NULL);
	ft_strlcpy(ptr, s, size + 1);
	return (ptr);
}
// #include <stdio.h>
// int main()
// {
//     char s1[] = "uai";
//     printf("a string duplicada eh:%s\n", ft_strdup(s1));
//     return (0);
// }