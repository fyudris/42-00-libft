/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyudris <fyudris@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 20:07:26 by fyudris           #+#    #+#             */
/*   Updated: 2024/11/12 20:20:48 by fyudris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
size_t	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i] || s1[i] == '\0' || s2[i] == '\0')
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main() {
    const char *str1 = "Hello";
    const char *str2 = "Helium";

    int result = ft_strncmp(str1, str2, 3);
    printf("Comparison result for first 3 characters: %d\n", result); // Expected: 0

    result = ft_strncmp(str1, str2, 5);
    printf("Comparison result for first 5 characters: %d\n", result); // Expected: non-zero

    return 0;
}
*/
