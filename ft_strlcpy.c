/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyudris <fyudris@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:50:44 by fyudris           #+#    #+#             */
/*   Updated: 2024/11/12 19:21:48 by fyudris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t			src_len;
	unsigned int	i;

	src_len = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	i = 0;
	while (i < size - 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}
/*
#include <stdio.h>

int main() {
    char src[] = "Hello, World!";
    char dest[6];  // Small buffer for testing

    unsigned int len = ft_strlcpy(dest, src, sizeof(dest));

    printf("Source length: %u\n", len);
    printf("Destination: %s\n", dest);

    return 0;
}
*/
