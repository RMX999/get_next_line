/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smamatku <smamatku@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/10 19:10:59 by smamatku          #+#    #+#             */
/*   Updated: 2022/04/10 19:53:53 by smamatku         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

void	ft_strclr(char *s)
{
	if (s)
		while (*s)
			*s++ = '\0';
}

char *check_rem(char *rem, char **line)
{
	char *pointer_n;

	pointer_n = NULL;
	if (rem)
		if ((pointer_n = ft_strchr(rem, '\n')))
		{
			*pointer_n = '\0';
			*line = ft_strdup(rem);
			ft_strcpy(rem, ++pointer_n);
		}
		else
		{
			*line = ft_strdup(rem);
			ft_strclr(rem);
		}
	else
		*line = pointer_n;
	return(pointer_n);
}

// char	*ft_strnew(size_t size)
// {
// 	char	*str;

// 	if (!(str = (char *)malloc(sizeof(char) * size + 1)))
// 		return (NULL);
// 	str[size] = '\0';
// 	while (size--)
// 		str[size] = '\0';
// 	return (str);
// }

int	get_next_line(int fd, char **line)
{
	static char	*rem;
	char		buff[BUF_SIZE + 1];
	int			bwd;
	char		*pointer_n;
	char		*tmp;	

	pointer_n = check_rem(rem, line);
	while (!pointer_n && (bwd = read(fd, buff, BUF_SIZE)))
	{			
		buff[bwd] = '\0';
		if((pointer_n = ft_strchr(buff, '\n')))
		{
			*pointer_n = '\0';
			pointer_n++;
			rem = ft_strdup(pointer_n);
		}
		tmp = *line;
		*line = ft_strjoin(*line, buff);
		free(tmp);
	}
	if (bwd || ft_strlen(rem) || ft_strlen(*line))
		return(1);
	else
		return(0);
}

int	main(void)
{
	char	*line;
	int		fd;

	fd = open("text.txt", O_RDONLY);
	while (get_next_line(fd, &line))
		printf("%s\n\n", line);
}
