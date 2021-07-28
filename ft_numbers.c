/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbers.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:42:52 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/28 17:11:53 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_number(va_list args)
{
	t_types	type;
	char	*res;
	int		i;

	type.number = va_arg(args, int);
	res = ft_itoa(type.number);
	i = 0;
	while (res[i] != '\0')
		write(1, &res[i++], 1);
	ft_strclear(&res);
	return (i);
}

int	ft_unumber(va_list args)
{
	t_types	type;
	char	*res;
	int		i;

	type.unumber = va_arg(args, int);
	res = ft_uitoa(type.unumber);
	i = 0;
	while (res[i] != '\0')
		write(1, &res[i++], 1);
	ft_strclear(&res);
	return (i);
}

int	ft_hex(va_list args, int converter)
{
	t_types	type;
	char	*res;
	int		i;

	type.hexadecimal = va_arg(args, int);
	res = ft_htoa(type.hexadecimal, converter);
	i = 0;
	while (res[i] != '\0')
		write(1, &res[i++], 1);
	ft_strclear(&res);
	return (i);
}

int	ft_pointer(va_list args)
{
	t_types	type;
	char	*aux;
	char	*res;
	int		i;

	type.pointer = va_arg(args, uintptr_t);
	if (!type.pointer)
		return (write(1, "0x0", 3));
	aux = ft_ptoa(type.pointer);
	res = ft_strjoin("0x", aux);
	i = 0;
	while (res[i] != '\0')
		write(1, &res[i++], 1);
	ft_strclear(&aux);
	ft_strclear(&res);
	return (i);
}
