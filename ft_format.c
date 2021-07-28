/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 19:41:40 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/28 18:27:59 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_format(const char *format, va_list args)
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
			ret += write(1, &tmp[i++], 1);
		else
		{
			ret += ft_placeholder(tmp, i, args);
			if (ret == -1)
			{
				ret = write(1, "%", 1);
				i++;
				continue ;
			}
			i += 2;
		}
	}
	free(tmp);
	return (ret);
}
