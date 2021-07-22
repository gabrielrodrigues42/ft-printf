/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/03 19:08:51 by gandrade          #+#    #+#             */
/*   Updated: 2021/06/11 23:19:16 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	size_t	ft_segments(char const *s, char c)
{
	size_t	segments;
	size_t	i;

	segments = 0;
	i = 0;
	while (s[i] && s[i] == c)
		i++;
	while (s[i])
	{
		while (s[i] && s[i] != c)
			i++;
		segments++;
		while (s[i] && s[i] == c)
			i++;
	}
	return (segments);
}

static	size_t	ft_segments_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	segments;
	size_t	i;

	if (!s)
		return (NULL);
	segments = ft_segments(s, c);
	arr = ft_calloc((segments + 1), sizeof(char *));
	if (!arr)
		return (NULL);
	segments = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] && s[i] != c)
		{
			arr[segments] = ft_substr(s, i, ft_segments_len(&s[i], c));
			segments++;
			i = (i + ft_segments_len(&s[i], c) - 1);
		}
		i++;
	}
	arr[segments] = NULL;
	return (arr);
}
