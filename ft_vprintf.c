/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 19:41:40 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/26 13:39:34 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_vprintf(const char *format, va_list args)
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
			ft_placeholder(tmp, i, args);
			i += 2;
		}
	}
	free(tmp);
	return (0);
}
