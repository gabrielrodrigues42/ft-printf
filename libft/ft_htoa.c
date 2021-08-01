/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_htoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 21:34:12 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/28 17:18:25 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_hexstr(char *str, unsigned int n, int size, int converter)
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
			str[size] = (n % 16) + converter;
			n /= 16;
		}
	}
}

char	*ft_htoa(unsigned int n, int converter)
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
	if (converter == 'x')
		converter = 87;
	else
		converter = 55;
	ft_hexstr(res, n, size, converter);
	return (res);
}
