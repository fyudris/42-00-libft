/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyudris <fyudris@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:29:28 by fyudris           #+#    #+#             */
/*   Updated: 2024/11/12 20:42:36 by fyudris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = 0;
	src_len = 0;
	i = 0;
	while (dst[dst_len])
		dst_len++;
	while (src[src_len])
		src_len++;
	if (size <= dst_len)
		return (size + src_len);
	i = 0;
	while (src[i] && dst_len + i < size - 1)
	{
		dst[dst_len + i] = src[i];
		i++;
	}
	dst[dst_len + i] = '\0';
	return (dst_len + src_len);
}
/*
#include <stdio.h>

int main() {
    char dest[15] = "Hello";
    char src[] = " World!";
    size_t len = ft_strlcat(dest, src, sizeof(dest));

    printf("Concatenated string: %s\n", dest);
    printf("Total length tried to create: %zu\n", len);

    return 0;
}
*/
