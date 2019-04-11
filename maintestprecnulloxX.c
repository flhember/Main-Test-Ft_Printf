/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintestprecnulloxX.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 21:15:05 by flhember          #+#    #+#             */
/*   Updated: 2019/03/08 22:23:33 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int		main()
{
	unsigned int		nb;

	nb = 0;

	printf("\t-----x-----\n");

	printf("null prec : %.0x|\n", nb);
	ft_printf("null prec : %.0x|\n", nb);
	printf("null prec : %.x|\n", nb);
	ft_printf("null prec : %.x|\n", nb);
	printf("null prec : %12.0x|\n", nb);
	ft_printf("null prec : %12.0x|\n", nb);
	printf("null prec : %-5.x|\n", nb);
	ft_printf("null prec : %-5.x|\n", nb);

	printf("null prec : %#.0x|\n", nb);
	ft_printf("null prec : %#.0x|\n", nb);
	printf("null prec : %#.x|\n", nb);
	ft_printf("null prec : %#.x|\n", nb);
	printf("null prec : %#12.0x|\n", nb);
	ft_printf("null prec : %#12.0x|\n", nb);
	printf("null prec : %#-5.x|\n", nb);
	ft_printf("null prec : %#-5.x|\n", nb);


	printf("\t-----o-----\n");
	nb = 0;
	printf("null prec : %.0o|\n", nb);
	ft_printf("null prec : %.0o|\n", nb);
	printf("null prec : %.o|\n", nb);
	ft_printf("null prec : %.o|\n", nb);
	printf("null prec : %12.0o|\n", nb);
	ft_printf("null prec : %12.0o|\n", nb);
	printf("null prec : %-5.o|\n", nb);
	ft_printf( "null prec : %-5.o|\n", nb);

	printf("null prec : %#.0o|\n", nb);
	ft_printf("null prec : %#.0o|\n", nb);
	printf("null prec : %#.o|\n", nb);
	ft_printf("null prec : %#.o|\n", nb);
	printf("null prec : %#12.0o|\n", nb);
	ft_printf("null prec : %#12.0o|\n", nb);
	printf("null prec : %#-5.o|\n", nb);
	ft_printf("null prec : %#-5.o|\n", nb);


	return (0);
}
