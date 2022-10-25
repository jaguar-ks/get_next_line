/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:21:13 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/25 02:54:25 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line_bonus.h"

char	*rl(int fd, char *str)
{
	char		*buff;
	int			ns;

	ns = 1;
	buff = malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (!buff)
		return (NULL);
	while (ns)
	{
		ns = read(fd, buff, BUFFER_SIZE);
		if (ns < 0)
		{
			free(buff);
			return (NULL);
		}
		buff[ns] = '\0';
		if (!ft_strlen(buff))
			return (str);
		str = ft_strjoin(str, buff);
		if (ft_strchr(str, '\n'))
			break ;
	}
	free(buff);
	return (str);
}

char	*ltr(char *str)
{
	int		i;
	int		j;
	char	*r;

	if (!str)
		return (NULL);
	i = 0;
	j = -1;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	r = (char *)malloc((i + 1) * sizeof(char));
	if (!r)
		return (NULL);
	while (i > ++j)
		r[j] = str[j];
	r[j] = '\0';
	return (r);
}

char	*dlb(char *str)
{
	int		i;
	int		j;
	char	*r;

	if (!str)
		return (NULL);
	i = ft_strlen(str);
	j = 0;
	while (str[j] && str[j] != '\n')
		j++;
	if ((i - j) > 0)
	{
		r = (char *)malloc(((i - j) + 1) * sizeof(char));
		if (!r)
			return (NULL);
		i = 0;
		while (str[++j])
			r[i++] = str[j];
		r[i] = '\0';
		return (r);
	}
	return (NULL);
}

char	*get_next_line(int fd)
{
	char		*buff;
	static char	*str[10240];

	if (fd < 0 && BUFFER_SIZE <= 0)
		return (NULL);
	str[fd] = rl(fd, str[fd]);
	if (!str)
		return (NULL);
	buff = ltr(str[fd]);
	str[fd] = dlb(str[fd]);
	return (buff);
}