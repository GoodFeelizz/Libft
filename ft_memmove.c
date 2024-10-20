/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togomez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 12:50:52 by togomez           #+#    #+#             */
/*   Updated: 2024/10/11 12:50:54 by togomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*dest_byte;
	unsigned char	*src_byte;

	dest_byte = (unsigned char *)dest;
	src_byte = (unsigned char *)src;
	if (dest_byte > src_byte)
	{
		while (n > 0)
		{
			dest_byte[n - 1] = src_byte[n - 1];
			n--;
		}
	}
	if (dest_byte < src_byte)
		ft_memcpy(dest_byte, src_byte, n);
	return (dest_byte);
}
