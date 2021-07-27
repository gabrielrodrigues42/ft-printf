/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 21:34:12 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/26 22:58:56 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_hexstr(char *str, unsigned int n, int size, int x)
{
	str[size] = '\0';
	while (size--)
	{
		if (n % 16 < 10)
		{
			str[size] = (n % 16) + '0';
			n /= 16;
		}
		else
		{
			str[size] = (n % 16) + x;
			n /= 16;
		}
	}
}

char	*ft_htoa(unsigned int n, int x)
{
	char			*res;
	int				size;
	unsigned int	aux;

	size = 1;
	aux = n / 16;
	while (aux)
	{
		size++;
		aux /= 16;
	}
	res = malloc(size + 1);
	if (!res)
		return (NULL);
	ft_hexstr(res, n, size, x);
	return (res);
}
