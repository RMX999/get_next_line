/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smamatku <smamatku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/20 20:25:01 by smamatku          #+#    #+#             */
/*   Updated: 2022/01/27 17:09:28 by smamatku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*ss1;
	const unsigned char	*ss2;
	size_t				i;

	i = 0;
	ss1 = (const unsigned char *)s1;
	ss2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (ss1[i] != ss2[i])
			return (ss1[i] - ss2[i]);
		i++;
	}
	return (0);
}

/*______ _          _     _    _             
|  ___(_)        | |   | |  | |            
| |_   _ _ __ ___| |_  | |  | | __ _ _   _ 
|  _| | | '__/ __| __| | |/\| |/ _` | | | |
| |   | | |  \__ \ |_  \  /\  / (_| | |_| |
\_|   |_|_|  |___/\__|  \/  \/ \__,_|\__, |
                                      __/ |
                                     |___/ 

 int	ft_memcmp_two(const void *s1, const void *s2, size_t n)
 {
 	size_t	i;

 	i = 0;
 	while (i < n)
 	{
 		if (((const unsigned char *)s1)[i] != ((const unsigned char *)s2)[i])
 			return (((const unsigned char *)s1)[i]
 				 - ((const unsigned char *)s2)[i]);
 		i++;
 	}
 	return (0);
 }


 _____                          _   _    _             
/  ___|                        | | | |  | |            
\ `--.  ___  ___ ___  _ __   __| | | |  | | __ _ _   _ 
 `--. \/ _ \/ __/ _ \| '_ \ / _` | | |/\| |/ _` | | | |
/\__/ /  __/ (_| (_) | | | | (_| | \  /\  / (_| | |_| |
\____/ \___|\___\___/|_| |_|\__,_|  \/  \/ \__,_|\__, |
                                                  __/ |
                                                 |___/ 

 int	ft_memcmp_tree(const void *s1, const void *s2, size_t n)
 {
 	unsigned char	*ss1;
 	unsigned char	*ss2;
 	size_t			i;

 	i = 0;
 	ss1 = (unsigned char *)s1;
 	ss2 = (unsigned char *)s2;
 	while (i < n)
 	{
 		if (ss1[i] != ss2[i])
 			return (ss1[i] - ss2[i]);
 		i++;
 	}
 	return (0);
}
*/