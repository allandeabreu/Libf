/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanbreu <allanbreu@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 12:47:44 by allanbreu         #+#    #+#             */
/*   Updated: 2026/04/22 13:12:40 by allanbreu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strrchr(const char *s, int c)
{
    size_t i;
    char *last;
    
    last = NULL;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            last = &s[i];
        i++;
    }
    if (c == '\0')
        return (&s[i]);
    return (last);
}
