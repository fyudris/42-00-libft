/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyudris <fyudris@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 15:01:30 by fyudris           #+#    #+#             */
/*   Updated: 2024/11/28 15:29:06 by fyudris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* Deletes and frees the given node and every successor of that node, using the 
* function ’del’ and free(3). 
* Finally, the pointer to the list must be set to NULL.
*/
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tail;

	while (*lst)
	{
		tail = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tail;
	}
	free(*lst);
	*lst = NULL;
}