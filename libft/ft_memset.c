/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smamatku <smamatku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 11:26:01 by smamatku          #+#    #+#             */
/*   Updated: 2021/12/25 13:19:19 by smamatku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void	*ft_memset(void *b, int c, size_t len)
// {
// 	size_t			i;
// 	unsigned char	*buc;

// 	i = 0;
// 	buc = (unsigned char *)b;
// 	while (i < len)
// 	{
// 		buc[i] = c;
// 		i++;
// 	}
// 	return (b = buc);
// }

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*tmp;

	i = 0;
	tmp = (unsigned char *)b;
	while (i < len)
	{
		tmp[i] = c;
		i++;
	}
	return (b = tmp);
}
