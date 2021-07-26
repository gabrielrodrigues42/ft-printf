/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/02 22:25:16 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/26 15:46:58 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	void	ft_nbrstr(char *str, unsigned int n, size_t size)
{
	str[size] = '\0';
	if (n >= 0)
	{
		while (size--)
		{
			str[size] = (n % 10) + '0';
			n /= 10;
		}
	}
	else
	{
		str[0] = '-';
		while (size-- && size > 0)
		{
			str[size] = (n % 10) * -1 + '0';
			n /= 10;
		}
	}
}

char	*ft_itoa_unsigned(unsigned int n)
{
	char				*res;
	size_t				size;
	unsigned int		aux;

	if (n >= 0)
		size = 1;
	else
		size = 2;
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