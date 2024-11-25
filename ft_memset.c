/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyudris <fyudris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:44:29 by fyudris           #+#    #+#             */
/*   Updated: 2024/11/14 17:52:29 by fyudris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	if (!s)
		return (NULL);
	ptr = (unsigned char *) s;
	while (n > 0)
	{
		*(ptr++) = (unsigned char) c;
		n--;
	}
	return (s);
}
/**
#include <stdio.h>
#include <string.h>

int main() {
    char str[50] = "Hello, World!";
    printf("Before memset: %s\n", str);

    memset(str, '*', 5);  // Set the first 5 bytes of str to '*'
    printf("After memset: %s\n", str);

    return 0;
}
*/
