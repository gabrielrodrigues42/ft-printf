/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 22:25:16 by gandrade          #+#    #+#             */
/*   Updated: 2021/08/04 15:42:57 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_nbrstr(char *str, unsigned int n, int size)
{
	str[size] = '\0';
	while (size--)
	{
		str[size] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_utoa(unsigned int n)
{
	char			*res;
	int				size;
	unsigned int	aux;

	size = 1;
	aux = n / 10;
	while (aux)
	{
		size++;
		aux /= 10;
	}
	res = malloc(size + 1);
	if (!res)
		return (NULL);
	ft_nbrstr(res, n, size);
	return (res);
}
