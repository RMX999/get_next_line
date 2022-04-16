/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smamatku <smamatku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 07:10:09 by smamatku          #+#    #+#             */
/*   Updated: 2021/12/28 18:18:52 by smamatku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned long	res;
	int				sign;

	res = 0;
	sign = 1;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		res = res * 10 + *str - '0';
		str++;
	}
	if (res > 2147483648 && sign == -1)
		return (0);
	else if (res > 2147483647 && sign == 1)
		return (-1);
	return (res * sign);
}

// int	ft_atoi(const char *str)
// {
// 	size_t			res;
// 	int				i;
// 	int				sign;

// 	sign = 1;
// 	res = 0;
// 	i = 0;
// 	while (*str == 32 || (*str >= 9 && *str <= 13))
// 		str++;
// 	if (*str == '-' || *str == '+')
// 	{
// 		if (*str == '-')
// 			sign *= -1;
// 		str++;
// 	}
// 	while (*str >= '0' && *str <= '9')
// 	{
// 		res = res * 10 + *str - '0';
// 		str++;
// 	}
// 	if (res > 2147483648 && sign == -1)
// 		return (-1);
// 	if (res > 2147483647)
// 		return (0);
// 	return (res * sign);
// }
