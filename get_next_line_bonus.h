/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faksouss <faksouss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 05:41:23 by faksouss          #+#    #+#             */
/*   Updated: 2022/10/26 05:41:59 by faksouss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include<stdio.h>
# include<unistd.h>
# include<string.h>
# include<stdlib.h>
# include<fcntl.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1
# endif

int		search(char *s, char c);
int		ft_strlen(char *s);
char	*ft_substr(char *s, int start, int len);
char	*join_str(char *s1, char *s2);
char	*copy(char *s);
char	*get_next_line(int fd);
char	*th_rst(char *s);
char	*rtrn_ln(char *s);

#endif
