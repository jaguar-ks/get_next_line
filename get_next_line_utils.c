/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deman_wolf <deman_wolf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:30:22 by deman_wolf        #+#    #+#             */
/*   Updated: 2022/10/21 17:51:59 by deman_wolf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

char	*ft_strjoin(char *s1, char *s2)
{
	int	i = -1;
	int	j = -1;
	char *d;

	if (!s1 && !s2)
		return NULL;
	while(s1[++i]);
	while(s2[++j]);
	d = (char *)malloc(i + j);
	if (!d)
		return NULL;
	i = -1;
	j = -1;
	while (s1[++i])
		d[i] = s1[i];
	while (s2[++j])
		d[j+i] = s2[j];
	d[j+i] = 0;
	return d;
}

int	ft_strchr(const char *s, int c)
{
	int	i;

	i = -1;
	while (s[++i])
		if (s[i] == (char)c)
			return (1);
	return (0);
}
