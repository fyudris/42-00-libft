/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyudris <fyudris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:29:28 by fyudris           #+#    #+#             */
/*   Updated: 2024/12/05 02:49:53 by fyudris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len = 0;
    size_t src_len = 0;
    size_t i = 0;

    // Calculate lengths of dst and src
    while (dst_len < size && dst[dst_len])
        dst_len++;
    while (src[src_len])
        src_len++;

    // Handle zero size
    if (size == 0)
        return (src_len + dst_len);

    // Append src to dst while ensuring space for null-termination
    i = 0;
    while (src[i] && (dst_len + i < size - 1))
    {
        dst[dst_len + i] = src[i];
        i++;
    }

    // Null-terminate if there is space
    if (dst_len + i < size)
        dst[dst_len + i] = '\0';

    return (dst_len + src_len);
}
