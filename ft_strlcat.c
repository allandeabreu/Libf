/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanbreu <allanbreu@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:09:56 by allanbreu         #+#    #+#             */
/*   Updated: 2026/04/28 14:26:26 by allanbreu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

size_t  ft_strlcat(char *  dst, const char *  src, size_t size)
{
    size_t counter_one;
    size_t counter_two;
    size_t dst_length;
    size_t src_length;

    counter_one = 0;
    counter_two = 0;

    if (size == 0)
        return (ft_strlen (src_length(src)));// aqui é que se o size, a funçao ja retorna o tamanho que ela "teria"
    dst_lenght = ft_strlen(dst);
    src_lenght = ft_strlen(src);
    while(dst[counter_one] != '\0')
    {
        counter_one++;// agora eu sei o tamnho que tem o dst...
    }
    while(src[counter_two] != '\0')//agora eu sei qual o tamanho total de src.. mas eu ainda preciso saber o quanto vai concatenar na dst
    {
        counter_two++;
    }
    while(dst[dst_length] != '\0' &&  )
    {
        dst[dst_length] = &src
    }