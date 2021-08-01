/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/18 19:48:09 by gandrade          #+#    #+#             */
/*   Updated: 2021/06/06 23:43:01 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	if (!dst && !src)
		return (NULL);
	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	while (n--)
	{
		*str1 = *str2;
		str1++;
		str2++;
	}
	return (dst);
}
