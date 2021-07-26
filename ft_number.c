/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_number.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 14:42:52 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/26 15:32:50 by gandrade         ###   ########.fr       */
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
	return (0);
}
