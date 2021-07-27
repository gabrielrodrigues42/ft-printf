/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 19:41:40 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/26 22:43:12 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_vprintf(const char *format, va_list args)
{
	char	*tmp;
	int		ret;
	int		i;

	tmp = ft_strdup(format);
	ret = 0;
	i = 0;
	while (tmp[i] != '\0')
	{
		if (tmp[i] != '%')
		{
			write(1, &tmp[i++], 1);
			ret++;
		}
		if (tmp[i] == '%')
		{
			ret += ft_placeholder(tmp, i, args);
			i += 2;
		}
	}
	free(tmp);
	return (ret);
}
