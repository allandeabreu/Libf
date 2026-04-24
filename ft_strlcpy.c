/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanbreu <allanbreu@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 14:45:50 by allanbreu         #+#    #+#             */
/*   Updated: 2026/04/24 10:44:30 by allanbreu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t counter;
    size_t lenght;

    counter = 0;
    lenght = 0;
    while (src[lenght] != '\0')
        lenght++;
    if (!dstsize)
        return (lenght);
    while (src[counter] != '\0' && counter < (dstsize - 1))
    {
        dst[counter] = src[counter];
        counter++;
    }
    dst[counter] = '\0';
    return (lenght);
}
