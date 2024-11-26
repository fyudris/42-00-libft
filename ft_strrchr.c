/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyudris <fyudris@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 15:52:31 by fyudris           #+#    #+#             */
/*   Updated: 2024/11/26 16:02:58 by fyudris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;
	char			*current_cc;

	cc = (char) c;
	i = 0;
	current_cc = NULL;
	while (s[i])
	{
		if (s[i] == cc)
			current_cc = (char *) &s[i];
		i++;
	}
	if (s[i] == cc)
		current_cc = (char *) &s[i];
	return (current_cc);
}
