/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deman_wolf <deman_wolf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:20:09 by deman_wolf        #+#    #+#             */
/*   Updated: 2022/10/21 17:58:54 by deman_wolf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

char	*jib_str(int fd, char *str)
{
	int i = 1;
	char *bf = (char *)malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!bf)
		return NULL;
	while (i)
	{
		i = read(fd, bf, BUFFER_SIZE);
		if (i < 0)
		{
			free (bf);
			return NULL;
		}
		bf[i] = 0;
		str = ft_strjoin(str, bf);
		if(ft_strchr(str, '\n'))
			break ;
	}
	free (bf);
	return str;
}

char	*ltr(char *str)
{
	
}

char	*get_next_line(int fd)
{
	char		*buff;
	static char	*str;
	
	if (fd < 0 && BUFFER_SIZE <= 0)
		return NULL;
	str = jib_str(fd, str);
	if (!str)
		return NULL;
	buff = ltr(str);
	return (str);
}
