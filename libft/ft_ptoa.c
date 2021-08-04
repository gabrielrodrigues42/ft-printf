/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ptoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 11:35:37 by gandrade          #+#    #+#             */
/*   Updated: 2021/08/04 15:54:14 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_ptrstr(char *str, size_t pointer, size_t size)
{
	str[size] = '\0';
	while (size--)
	{
		if (pointer % 16 < 10)
		{
			str[size] = (pointer % 16) + '0';
			pointer /= 16;
		}
		else
		{
			str[size] = (pointer % 16) + 87;
			pointer /= 16;
		}
	}
}

char	*ft_ptoa(size_t pointer)
{
	char	*res;
	size_t	size;
	size_t	aux;

	size = 1;
	aux = pointer / 16;
	while (aux)
	{
		size++;
		aux /= 16;
	}
	res = malloc(size + 1);
	if (!res)
		return (NULL);
	ft_ptrstr(res, pointer, size);
	return (res);
}
