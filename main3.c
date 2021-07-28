/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 22:54:49 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/28 02:11:12 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>

int	main(void)
{
	ft_printf("%Hello\n");
	ft_printf("%%Hello\n");
	ft_printf("%aHello\n");
	ft_printf("Hello\n", 'c');
	ft_printf("Hello\n", "hello");
	ft_printf("%cHello\n", 'c');
	ft_printf("%sHello\n", "hello");
	return (0);
}
