/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/07 04:13:05 by flhember          #+#    #+#             */
/*   Updated: 2019/03/07 19:57:49 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int		main()
{
	int		nb;
	char	c;

	nb = 6;
	c = 'O';

	ft_printf("%5p|\n", &nb);
//	printf("%5p|\n", &nb);
	ft_printf("%-15p|\n", &nb);
//	printf("%-15p|\n", &nb);
	ft_printf("%-5p|\n", &nb);
//	printf("%-5p|\n", &nb);
	ft_printf("%42p|\n", &nb);
//	printf("%42p|\n", &nb);
	ft_printf("%-18p|\n", &nb);
//	printf("%-18p|\n", &nb);
	ft_printf("%42p|\n", &nb);
//	printf("%42p|\n", &nb);
	ft_printf("%5p|\n", &c);
//	printf("%5p|\n", &c);
	ft_printf("%-15p|\n", &c);
//	printf("%-15p|\n", &c);
	ft_printf("%-5p|\n", &c);
//	printf("%-5p|\n", &c);
	ft_printf("%42p|\n", &c);
//	printf("%42p|\n", &c);
	ft_printf("%-18p|\n", &c);
//	printf("%-18p|\n", &c);
	ft_printf("%42p|\n", &c);	
//	printf("%42p|\n", &c);

	return (0);
}
