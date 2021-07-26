/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vprintf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/22 19:41:40 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/25 21:26:59 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_placeholder(char *tmp, int i, va_list args);

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
	return (0);
}

int	ft_placeholder(char *tmp, int i, va_list args)
{
	if (tmp[i + 1] == '%')
		write(1, "%%", 1);
	if (tmp[i + 1] == 'c')
		write(1, "c", 1);
	if (tmp[i + 1] == 's')
		write(1, "s", 1);
	if (tmp[i + 1] == 'p')
		write(1, "p", 1);
	if (tmp[i + 1] == 'i')
		write(1, "i", 1);
	if (tmp[i + 1] == 'd')
		write(1, "d", 1);
	if (tmp[i + 1] == 'u')
		write(1, "u", 1);
	if (tmp[i + 1] == 'x')
		write(1, "x", 1);
	if (tmp[i + 1] == 'X')
		write(1, "X", 1);
	return 0;
}
