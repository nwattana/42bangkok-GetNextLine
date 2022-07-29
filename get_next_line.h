/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwattana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/02 18:28:52 by nwattana          #+#    #+#             */
/*   Updated: 2022/06/02 18:37:49 by nwattana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
void	*ft_calloc(size_t a, size_t b);
char	*ft_strjoin(char *head, char *tail, int byte_read);
size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int tofind);
char	*ft_substr(const char *s, int start, int len);
#endif
