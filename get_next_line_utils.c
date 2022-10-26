/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 23:58:42 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/26 03:45:37 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

char	*copy(char *s)
{
	int		i;
	char	*d;

	if (!s)
		return (NULL);
	d = (char *)malloc(ft_strlen(s) + 1);
	if (!d)
		return (NULL);
	i = -1;
	while (s[++i])
		d[i] = s[i];
	return (d);
}

int	search(char *s, char c)
{
	int	i;

	i = -1;
	if (!s)
		return (1);
	while (s[++i])
		if (s[i] == c)
			return (0);
	return (1);
}

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*join_str(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*d;

	if (!s1 && s2)
		return (s2);
	if (!s2 && s1)
		return (s1);
	if (s1 && s2)
	{
		i = -1;
		j = -1;
		d = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
		if (!d)
			return (free(s1), NULL);
		while (s1[++i])
			d[i] = s1[i];
		while (s2[++j])
			d[i + j] = s2[j];
		d[i + j] = '\0';
		return (free(s1), free(s2), d);
	}
	return (NULL);
}

char	*ft_substr(char *s, int start, int len)
{
	char	*d;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	if (len >= ft_strlen(s))
		j = ft_strlen(s);
	else
		j = len + 1;
	d = (char *)malloc(j * sizeof(char));
	if (!d)
		return (NULL);
	i = 0;
	if (start >= ft_strlen(s))
		d[i] = 0;
	while (start <= ft_strlen(s) && i < len)
		d[i++] = s[start++];
	d[i] = '\0';
	return (d);
}
