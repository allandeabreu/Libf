/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanbreu <allanbreu@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 13:34:40 by allanbreu         #+#    #+#             */
/*   Updated: 2026/04/28 14:26:31 by allanbreu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;

    i = 0;
    if (needle == "")
        return(haystack);
    while (haystack[i] != '\0' && && len > 0)
    {
        if (haystack[i] == needle[i])
        {
            return(&haystack[i]);
        }
        i++;
        len--;
    }
    return (NULL);
}