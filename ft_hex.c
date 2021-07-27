/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 21:20:29 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/26 22:31:37 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft.h"

int	ft_hex(va_list args, int x)
{
	t_types	type;
	char	*res;
	int		i;

	type.hexadecimal = va_arg(args, int);
	res = ft_htoa(type.hexadecimal, x);
	i = 0;
	while (res[i] != '\0')
		write(1, &res[i++], 1);
	ft_strclear(&res);
	return (i);
}
