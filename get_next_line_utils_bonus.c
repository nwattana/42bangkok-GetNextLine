/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 19:02:22 by nwattana          #+#    #+#             */
/*   Updated: 2022/06/02 19:02:33 by nwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	*ft_calloc(size_t a, size_t b)
{
	size_t	total;
	size_t	i;
	void	*res;

	i = 0;
	total = a * b;
	if (total <= 0)
		return (NULL);
	res = (char *)malloc(total);
	if (!res)
		return (NULL);
	while (i < total)
	{
		*(char *)(res + i) = '\0';
		i++;
	}
	return (res);
}

char	*ft_strjoin(char *head, char *tail, int byte_read)
{
	char	*res;
	int		i;
	int		j;

	i = 0;
	j = 0;
	res = (char *)ft_calloc(sizeof(char), \
			(ft_strlen(head) + ft_strlen(tail) + 1));
	if (!res)
		return (NULL);
	while (head[i])
	{
		res[i] = head[i];
		i++;
	}
	while (tail[j] && byte_read--)
	{
		res[i + j] = tail[j];
		j++;
	}
	return (res);
}

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	char	*temp;

	if (!s)
		return (NULL);
	temp = (char *)s;
	while (*temp)
	{
		if (*temp == c)
			return (temp);
		temp++;
	}
	return (NULL);
}

char	*ft_substr(const char *s, int start, int len)
{
	char	*res;
	int		i;

	i = 0;
	if (len < 0 || !s || start < 0)
		return (NULL);
	res = (char *)ft_calloc(sizeof(char), len + 1);
	while (*(s + start + i) != '\0' && i < len)
	{
		res[i] = *(s + start + i);
		i++;
	}
	return (res);
}
