/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allferna <allferna@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 20:00:55 by allferna          #+#    #+#             */
/*   Updated: 2026/05/11 21:10:29 by allferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*str;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	str = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char	*s1;
// 	char	*set;
// 	char	*res;
// 	char	*res2;
// 	char	*res3;

// 	s1 = "   ###  42 Porto Escola  ###   ";
// 	set = " #";
// 	printf("Original: %s\n", s1);
// 	printf("Set:      %s\n", set);
// 	res = ft_strtrim(s1, set);
// 	if (res)
// 	{
// 		printf("Trimmed:  %s\n", res);
// 		free(res);
// 	}
// 	else
// 		printf("Erro na alocação!\n");
// 	res2 = ft_strtrim("", "123");
// 	printf("\nTeste Vazia: |%s|\n", res2);
// 	free(res2);
// 	res3 = ft_strtrim("aaaaa", "a");
// 	printf("Teste Tudo 'a': |%s|\n", res3);
// 	free(res3);
// 	return (0);
// }
