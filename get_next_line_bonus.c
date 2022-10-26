/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 05:38:56 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/26 05:44:01 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*rtrn_ln(char *s)
{
	int		i;
	char	*r;

	if (!s || !ft_strlen(s))
		return (NULL);
	i = 0;
	while (s[i] && s[i] != '\n')
		i++;
	if (s[i] == '\n')
		i++;
	r = ft_substr(s, 0, i);
	return (r);
}

char	*th_rst(char *s)
{
	int		i;
	int		j;
	char	*r;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	j = 0;
	while (s[j] && s[j] != '\n')
		j++;
	if (!s[j])
		return (free(s), NULL);
	if (s[j] == '\n')
		j++;
	r = ft_substr(s, j, (i - j));
	free(s);
	if (!ft_strlen(r))
		return (free(r), NULL);
	return (r);
}

char	*get_next_line(int fd)
{
	char		*bf;
	static char	*s[10240];
	char		*r;
	int			i;

	if (fd < 0 && BUFFER_SIZE <= 0)
		return (NULL);
	i = 1;
	while (i && search(s[fd], '\n'))
	{
		bf = (char *)malloc(BUFFER_SIZE + 1);
		if (!bf)
			return (NULL);
		i = read(fd, bf, BUFFER_SIZE);
		if (i < 0)
			return (free(bf), NULL);
		bf[i] = '\0';
		if (!ft_strlen(bf))
		{
			free(bf);
			break ;
		}
		s[fd] = join_str(s[fd], bf);
	}
	return ((r = rtrn_ln(s[fd])), (s[fd] = th_rst(s[fd])), r);
}
