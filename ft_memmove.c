/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyudris <fyudris@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 17:19:31 by fyudris           #+#    #+#             */
/*   Updated: 2024/11/26 17:46:19 by fyudris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*c_src;
	char	*c_dest;
	size_t	i;

	if (!dest && !src)
		return (NULL);
	c_src = (char *) src;
	c_dest = (char *) dest;
	i = 0;
	if (c_dest > c_src)
		while (n-- > 0)
			c_dest[n] = c_src[n];
	else
	{
		while (i < n)
		{
			c_dest[i] = c_src[i];
			i++;
		}
	}
	return (dest);
}
