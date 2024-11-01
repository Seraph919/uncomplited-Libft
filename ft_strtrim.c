/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:42:27 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/30 04:09:39 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	i;
	size_t	k;
	size_t	setlen;
	char	*returned;

	i = 0;
	k = 0;
	if (!s)
		return (NULL);
	setlen = ft_strlen(set);
	returned = ((char *)malloc(sizeof(char) * (ft_strlen(s) - (setlen * 2))
				+ 1));
	if (!returned)
		return (NULL);
	while (s[i])
	{
		if ((ft_strchr(set, s[i]) != NULL) && (i > 1 || i > ft_strlen(s) - 3))
			i++;
		else
			returned[k++] = s[i++];
	}
	returned[k] = '\0';
	return (returned);
}
/*
int	main(void)
{
	char	*s;

	s = "xwzazch akhay ssaatzx";
	printf("%s\n", ft_strtrim(s,"xz"));
}
*/
