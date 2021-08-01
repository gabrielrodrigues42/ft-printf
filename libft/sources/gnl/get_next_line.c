/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/04 01:41:40 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/31 14:26:45 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	return_line(int rd, char **storage, char **line);
static int	check_error(int rd, int fd, char *buffer);

int	get_next_line(int fd, char **line)
{
	static char	*storage[OPEN_MAX];
	char		*buffer;
	char		*aux;
	int			rd;

	buffer = malloc((BUFFER_SIZE + 1) * sizeof(char));
	rd = read(fd, buffer, BUFFER_SIZE);
	check_error(rd, fd, buffer);
	while (rd > 0)
	{
		buffer[rd] = '\0';
		if (!storage[fd])
			storage[fd] = ft_strdup(buffer);
		else
		{
			aux = ft_strjoin(storage[fd], buffer);
			free(storage[fd]);
			storage[fd] = aux;
		}
		if (ft_strchr(storage[fd], '\n'))
			break ;
		rd = read(fd, buffer, BUFFER_SIZE);
	}
	free(buffer);
	return (return_line(rd, &storage[fd], line));
}

static int	return_line(int rd, char **storage, char **line)
{
	char	*aux;
	int		i;

	if (rd < 0 || !line || BUFFER_SIZE < 1)
		return (ERROR);
	if (rd == 0 && *storage == 0)
	{
		*line = ft_strdup("");
		ft_strclear(storage);
		return (END_OF_FILE);
	}
	i = 0;
	while ((*storage)[i] != '\n' && (*storage)[i] != '\0')
		i++;
	*line = ft_substr(*storage, 0, i);
	if (ft_strchr(*storage, '\n'))
	{
		aux = ft_strdup(*storage + i + 1);
		free(*storage);
		*storage = aux;
		return (LINE_READ);
	}
	ft_strclear(storage);
	return (END_OF_FILE);
}

static int	check_error( int rd, int fd, char *buffer)
{
	if (rd < 0 || fd < 0 || !buffer || BUFFER_SIZE < 1)
		return (ERROR);
	return (0);
}
