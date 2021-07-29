/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 18:35:24 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/29 17:57:49 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_format(const char *format, va_list args);
int	ft_placeholder(char *format, int offset, va_list args);

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		done;

	va_start(args, format);
	done = ft_format(format, args);
	va_end(args);
	return (done);
}

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

int	ft_placeholder(char *format, int offset, va_list args)
{
	int	ret;

	if (format[offset + 1] == 'i' || format[offset + 1] == 'd')
		ret = ft_number(args);
	else if (format[offset + 1] == 'u')
		ret = ft_unumber(args);
	else if (format[offset + 1] == 'x')
		ret = ft_hex(args, 'x');
	else if (format[offset + 1] == 'X')
		ret = ft_hex(args, 'X');
	else if (format[offset + 1] == 'c')
		ret = ft_char(args);
	else if (format[offset + 1] == 's')
		ret = ft_string(args);
	else if (format[offset + 1] == 'p')
		ret = ft_pointer(args);
	else if (format[offset + 1] == '%')
		ret = write(1, "%", 1);
	else
		return (-1);
	return (ret);
}
