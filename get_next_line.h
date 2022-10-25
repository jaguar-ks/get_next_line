/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 16:21:01 by deman_wolf        #+#    #+#             */
/*   Updated: 2022/10/25 00:12:56 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include<stdio.h>
# include<unistd.h>
# include<string.h>
# include<stdlib.h>
# include<fcntl.h>

# define BUFFER_SIZE

char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strchr(char *s, int c);
int		ft_strlen(char *s);
char	*dlb(char *str);
char	*ltr(char *str);
char	*jib_str(int fd, char *str);

#endif
