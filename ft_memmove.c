/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:23:18 by asoudani          #+#    #+#             */
/*   Updated: 2024/11/01 06:53:27 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t numBytes)
{
	size_t	i;

	i = 0;
	if (!src || !dest || numBytes == 0)
		return (dest);
	if (src >= dest)
	{
		ft_memcpy(dest, src, numBytes);
		return (dest);
	}
	while (numBytes--)
		*((unsigned char *)dest + numBytes) = *((unsigned char *)src
				+ numBytes);
	return (dest);
}
//returned dest instead of NULL and it worked, seach why!!!