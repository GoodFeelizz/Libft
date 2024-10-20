/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: togomez <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 14:22:50 by togomez           #+#    #+#             */
/*   Updated: 2024/10/11 14:22:52 by togomez          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t		i;
	const char	*ps1;
	const char	*ps2;

	i = 0;
	ps1 = s1;
	ps2 = s2;
	while (i < n)
	{
		if (ps1[i] != ps2[i])
			return ((unsigned char)ps1[i] - (unsigned char)ps2[i]);
		i++;
	}
	return (0);
}
