/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanbreu <allanbreu@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 01:30:29 by allanbreu         #+#    #+#             */
/*   Updated: 2026/05/12 01:45:46 by allanbreu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	s_len;
	size_t	i;

	if (!s)
		return (NULL);

	s_len = ft_strlen(s);

	if (start >= s_len)
		return (ft_strdup(""));

	if (len > s_len - start)
		len = s_len - start;

	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);

	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}

	str[i] = '\0';

	return (str);
}
// #include <stdio.h>
// int	main(void)
// {
// 	char *s;

// 	s = ft_substr("Hello World", 6, 5);
// 	printf("%s\n", s);
// 	free(s);
// }