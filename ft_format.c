/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 19:41:40 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/23 22:02:04 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_format(const char *format, va_list args)
{
	char	*tmp;
	int		i;

	tmp = ft_strdup(format);
	i = 0;
	while (tmp[i] != '\0')
	{
		if (tmp[i] != '%')
			write(1, &tmp[i++], 1);
		if (tmp[i] == '%')
		{
			i++;
			
		}
	}
	return (0);
}