/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyudris <fyudris@student.42berlin.de>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 21:47:59 by fyudris           #+#    #+#             */
/*   Updated: 2024/11/27 22:21:28 by fyudris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_length(int n);
static char	*allocate_string(int len);
static void	fill_string_with_number(char *str, long num, int len);

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*result;

	num = n;
	len = get_num_length(num);
	result = allocate_string(len);
	if (!result)
		return (NULL);
	fill_string_with_number(result, num, len);
	return (result);
}

/**
* Calculates the length of the number including '-' if negative.
*/
static int	get_num_length(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

/**
* Allocate memory for a string of length `len` and null-terminates it.
*/
static char	*allocate_string(int len)
{
	char	*str;

	str = (char *) malloc ((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len] = '\0';
	return (str);
}

/**
* Fills the string `str` with the characters of the number `num`.
*/
static void	fill_string_with_number(char *str, long num, int len)
{
	if (num == 0)
	{
		str[0] = '0';
		return ;
	}
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		str[--len] = '0' + (num % 10);
		num /= 10;
	}
}
