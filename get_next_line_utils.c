/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikayacio <ikayacio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/21 12:32:41 by ikayacio          #+#    #+#             */
/*   Updated: 2022/11/23 11:26:33 by ikayacio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	result_len(char *stash)
{
	int	len;

	len = 0;
	while (stash[len] != '\n' && stash[len] != '\0')
		len++;
	if (stash[len] == '\n')
		len++;
	return (len);
}

int	ft_strlen(char *stash)
{
	int	len;

	len = 0;
	while (stash[len] != '\0')
		len++;
	return (len);
}

char	*ft_strjoin(char *s1, char *s2)
{
	if (!s1)
	{
		s1 = malloc (sizeof(char));
		if (!s1)
		{
			free(s1);
			s1 = NULL;
			return (NULL);
		}
		s1[0] = '\0';
	}
	if (!s1 || !s2)
	{
		free(s1);
		s1 = NULL;
		return (NULL);
	}
	return (ft_strjoin2(s1, s2));
}

char	*ft_strjoin2(char *s1, char *s2)
{
	char	*return_str;
	size_t	i;
	size_t	j;

	return_str = malloc (sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!return_str)
	{
		free (return_str);
		return_str = NULL;
		free(s1);
		s1 = NULL;
		return (NULL);
	}
	i = -1;
	j = 0;
	while (s1[++i])
		return_str[i] = s1[i];
	while (s2[j])
		return_str[i++] = s2[j++];
	return_str[i] = '\0';
	free (s1);
	s1 = NULL;
	return (return_str);
}

int	check_newline(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\n' && s[i] != '\0')
		i++;
	if (s[i] == '\n')
		return (1);
	else
		return (0);
}
