/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 01:37:47 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/28 18:40:08 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int chr)
{
	int		i;
	char	*lastseen;

	i = 0;
	lastseen = NULL;
	while (str[i])
	{
		if (str[i] == (char)chr)
		{
			lastseen = (char *)&str[i];
		}
		i++;
	}
	if ((char)chr == '\0')
		return ((char *)&str[i]);
	return (lastseen);
}
