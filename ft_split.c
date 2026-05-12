/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: allanbreu <allanbreu@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 01:46:35 by allanbreu         #+#    #+#             */
/*   Updated: 2026/05/12 01:51:04 by allanbreu        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  count_words(char const *s, char c)
{
    int count = 0;
    int i = 0;

    while (s[i])
    {
        while (s[i] == c && s[i])
            i++;
        if (s[i])
            count++;
        while (s[i] != c && s[i])
            i++;
    }
    return count;
}

static char *word_dup(char const *s, int start, int end)
{
    char *word;
    int i = 0;

    word = malloc((end - start + 1) * sizeof(char));
    if (!word)
        return NULL;

    while (start < end)
        word[i++] = s[start++];
    word[i] = '\0';

    return word;
}

char **ft_split(char const *s, char c)
{
    char **result;
    int i = 0;
    int j = 0;
    int start;
    int words;

    if (!s)
        return NULL;

    words = count_words(s, c);

    result = malloc(sizeof(char *) * (words + 1));
    if (!result)
        return NULL;

    while (s[i])
    {
        while (s[i] == c && s[i])
            i++;
        start = i;

        while (s[i] != c && s[i])
            i++;

        if (i > start)
        {
            result[j] = word_dup(s, start, i);
            if (!result[j])
                return NULL;
            j++;
        }
    }
    result[j] = NULL;
    return result;
}