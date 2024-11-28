/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyudris <fyudris@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 13:50:56 by fyudris           #+#    #+#             */
/*   Updated: 2024/11/28 13:58:51 by fyudris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
* Allocates (with malloc(3)) and returns a new node.
* The member variable ’content’ is initialized with
* the value of the parameter ’content’. The variable
* ’next’ is initialized to NULL.
*/
t_list	*ft_lstnew(void *content)
{
	t_list	*head;

	head = (t_list *) malloc(sizeof(t_list));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
