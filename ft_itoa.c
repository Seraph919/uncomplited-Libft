/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asoudani <asoudani@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 02:08:18 by asoudani          #+#    #+#             */
/*   Updated: 2024/10/28 09:55:46 by asoudani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	integerlen(int number)
{
	int	i;

	i = 0;
	if (number < 0)
	{
		number *= -1;
		i++;
	}
	while (number)
	{
		number /= 10;
		i++;
	}
	return (i);
}

void	arrfill(long i, int index, long n, char *str)
{
	while (i * 10 < n)
		i *= 10;
	while (i)
	{
		str[index] = (n / i) + '0';
		n %= i;
		i /= 10;
		index++;
	}
	str[index] = '\0';
}

char	*ft_itoa(int n)
{
	long	i;
	char	*str;
	int		index;

	i = 1;
	index = 0;
	str = (char *)malloc(sizeof(char) * integerlen(n));
	if (n == -2147483648)
	{
		str = "-2147483648";
		return (str);
	}
	if (!str)
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		str[index++] = '-';
	}
	arrfill(i, index, n, str);
	return (str);
}
/*
int	main(void)
{
	printf("%s\n", ft_itoa(-2147483648));
	printf("%s\n", ft_itoa(2147483647));
	printf("%s\n", ft_itoa(0));
}
*/