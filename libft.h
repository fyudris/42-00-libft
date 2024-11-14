/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyudris <fyudris@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:46:56 by fyudris           #+#    #+#             */
/*   Updated: 2024/11/14 17:51:22 by fyudris          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
size_t		ft_strlen(const char *s);
void		*memset(void *s, int c, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

int	ft_strncmp(const char *s1, const char *s2, size_t n);

#endif
