/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deman_wolf <deman_wolf@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:21:01 by deman_wolf        #+#    #+#             */
/*   Updated: 2022/10/21 17:52:13 by deman_wolf       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
#define GET_NEXT_LINE_H

#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<fcntl.h>

#ifndef BUFFER_SIZE
#define	BUFFER_SIZE 10
#endif

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(const char *s, int c);

#endif
