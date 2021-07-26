/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gandrade <gandrade@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/26 00:25:38 by gandrade          #+#    #+#             */
/*   Updated: 2021/07/26 13:17:48 by gandrade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	//ft_printf("%%HELLO %cWORLD%%\n");
	//ft_printf("%%%c%s%p%i%d%u%x%X\n");
	ft_printf("Hello: %s  %c  %%!\n", "Hello", 'C');
	return (0);
}
