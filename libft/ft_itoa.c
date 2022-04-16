/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smamatku <smamatku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 07:06:56 by smamatku          #+#    #+#             */
/*   Updated: 2022/01/26 11:52:44 by smamatku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <stdio.h>

// get full size for malloc!
static int	check_size(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n++;
		i = -i;
	}
	while (i > 0)
	{
		n /= 10;
		i++;
	}
	return (n);
}

static void	ft_int_to_string(char *s, int size, int n)
{
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	s[size] = '\0';
	size--;
	while (n > 0)
	{
		s[size] = n % 10 + '0';
		size--;
		n /= 10;
	}
}

char	*ft_itoa(int n)
{	
	int		msize;
	char	*s;

	msize = check_size(n);
	if (n == -2147483648)
	{
		s = (char *) malloc(sizeof(char) * (msize + 1));
		s = "-2147483648";
		if (!s)
			return (NULL);
		return (s);
	}
	s = (char *) malloc(sizeof(char) * (msize + 1));
	if (!s)
		return (NULL);
	ft_int_to_string(s, msize, n);
	return (s);
}
