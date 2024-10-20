/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togomez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:05:02 by togomez           #+#    #+#             */
/*   Updated: 2024/10/11 14:05:04 by togomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str2;
	unsigned char	ch;

	str2 = (unsigned char *)s;
	i = 0;
	ch = (unsigned char)c;
	while (n--)
	{
		if (str2[i] == ch)
			return (&str2[i]);
		i++;
	}
	return (NULL);
}
