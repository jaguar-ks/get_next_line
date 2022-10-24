/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:30:22 by deman_wolf        #+#    #+#             */
/*   Updated: 2022/10/24 04:47:25 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

int	ft_strlen(char *s)
{
	int	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(char *s)
{
	int		i;
	char	*d;

	i = -1;
	d = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!d)
		return (NULL);
	while (s[++i])
		d[i] = s[i];
	d[i] = '\0';
	return (d);
}

char	*ft_concat(char *s, char *d)
{
	int	i;
	int	j;

	i = ft_strlen(d);
	j = -1;
	while (s[++j])
		d[i + j] = s[j];
	d[i + j] = '\0';
	return (d);
}

char	*ft_strjoin(char  *s1, char  *s2)
{
	char	*d;
	
	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	d = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!d)
		return (NULL);
	d = ft_concat(s1, d);
	d = ft_concat(s2, d);
	return (d);
}

int	ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return (1);
		i++;
	}
	return (0);
}
