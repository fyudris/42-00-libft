/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyudris <fyudris@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 22:54:08 by fyudris           #+#    #+#             */
/*   Updated: 2024/11/27 22:58:59 by fyudris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
* Applies the function ’f’ on each character of the string passed as argument, 
* passing its index as first argument. Each character is passed by address 
* to ’f’ to be modified if necessary.
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
