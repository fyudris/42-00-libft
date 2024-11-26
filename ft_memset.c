/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyudris <fyudris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 18:44:29 by fyudris           #+#    #+#             */
/*   Updated: 2024/11/26 14:40:16 by fyudris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) s;
	while (n > 0)
	{
		*(ptr++) = (unsigned char) c;
		n--;
	}
	return (s);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    // Test case from the checker
    void *result = ft_memset(((void*)0), 'a', 12);
    printf("Result for ft_memset(NULL, 'a', 12): %p\n", result); 
	// Should print (nil) or NULL

    // Additional cases to verify behavior
    char buffer[20] = {0};
    ft_memset(buffer, 'b', 5);
    printf("Buffer after memset: %.5s\n", buffer); 
	// Should print "bbbbb"

    result = ft_memset(NULL, 'a', 0);
    printf("Result for ft_memset(NULL, 'a', 0): %p\n", result); 
	// Should print (nil) or NULL

    return 0;
}
*/
