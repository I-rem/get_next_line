/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikayacio <ikayacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:30:31 by ikayacio          #+#    #+#             */
/*   Updated: 2022/11/23 11:02:26 by ikayacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif
# include <stdlib.h>
# include <unistd.h>

char	*ft_strjoin2(char *s1, char *s2);
int		result_len(char *stash);
int		ft_strlen(char *stash);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
int		check_newline(char *s);
#endif
