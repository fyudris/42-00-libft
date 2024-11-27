/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyudris <fyudris@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 20:59:13 by fyudris           #+#    #+#             */
/*   Updated: 2024/11/27 21:47:22 by fyudris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *s, char c);
static char		*extract_next_word(const char **s, char c);
static void		free_all(char **words, int count);

char	**ft_split(const char *s, char c)
{
	char	**result;
	size_t	word_count;
	int		i;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **) malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	while (i < (int) word_count)
	{
		result[i] = extract_next_word(&s, c);
		if (!result[i])
		{
			free_all(result, i);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}

/*
* Count the number of words in the input string 's' separated by the 
* delimiter 'c'.
*/
static size_t	count_words(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			count++;
			while (*s != c && *s)
				s++;
		}
	}
	return (count);
}

/**
 * Extracts the next word from the input string `s` separated 
 * by the character `c`.
 * The pointer `s` is updated to point to the character after 
 * the extracted word.
 */
static char	*extract_next_word(const char **s, char c)
{
	const char	*start;
	const char	*end;
	char		*word;

	while (**s == c)
		(*s)++;
	start = *s;
	while (**s != c && **s)
		(*s)++;
	end = *s;
	word = ft_substr(start, 0, end - start);
	return (word);
}

static void	free_all(char **words, int count)
{
	while (count)
		free(words[--count]);
	free(words);
}
