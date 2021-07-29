/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 19:42:09 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/29 16:50:11 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int	main(void)
{
	char	character = 'C';
	char	*string = "Hello";
	char	*string_null = NULL;
	void	*pointer = NULL;

	ft_printf("%c\n", character);
	ft_printf("%s\n", string);
	ft_printf("%p\n", pointer);
	ft_printf("%p\n", -1);
	ft_printf("%d\n", INT_MAX);
	ft_printf("%d\n", INT_MIN);
	ft_printf("%d\n", 0);
	ft_printf("%i\n", INT_MAX);
	ft_printf("%i\n", INT_MIN);
	ft_printf("%i\n", 0);
	ft_printf("%u\n", UINT_MAX);
	ft_printf("%u\n", 0);
	ft_printf("%x\n", INT_MAX);
	ft_printf("%x\n", INT_MIN);
	ft_printf("%x\n", UINT_MAX);
	ft_printf("%x\n", 0);
	ft_printf("%X\n", INT_MAX);
	ft_printf("%X\n", INT_MIN);
	ft_printf("%X\n", UINT_MAX);
	ft_printf("%X\n", 0);
	ft_printf("%%\n");
	ft_printf("%\n");
	ft_printf("%c\n");
	ft_printf("%s\n");
	ft_printf("%s\n", "");
	ft_printf("%s\n", NULL);
	ft_printf("%s\n", pointer);
	ft_printf("%-10s\n", string);
	ft_printf("%f\n");
	ft_printf("%d\n", ft_printf("%s\n", string_null));
	ft_printf("%d\n", ft_printf("%s\n", string));
	return (0);
}
