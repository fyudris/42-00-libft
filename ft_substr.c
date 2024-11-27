/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyudris <fyudris@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 18:21:48 by fyudris           #+#    #+#             */
/*   Updated: 2024/11/27 19:09:59 by fyudris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	s_len;
	size_t	alloc_len;
	size_t	i;
	char	*str;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start > s_len)
		return (ft_strdup(""));
	alloc_len = s_len - start;
	if (alloc_len > len)
		alloc_len = len;
	str = ft_calloc(alloc_len + 1, sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (i < alloc_len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
