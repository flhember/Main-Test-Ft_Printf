/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 22:37:47 by flhember          #+#    #+#             */
/*   Updated: 2019/03/08 23:00:53 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int		main()
{
	int		nb;

	nb = 23;

	printf("precision:%.5u|\n", nb);
	ft_printf("precision:%.5u|\n", nb);
	printf("Prec + 0:%0.5u|\n", nb);
	ft_printf("Prec + 0:%0.5u|\n", nb);
	printf("Prec + minus:%-.5u|\n", nb);
	ft_printf("Prec + minus:%-.5u|\n", nb);
	printf("size:%5u|\n", nb);
	ft_printf("size:%5u|\n", nb);
	printf("size + minus:%-5u|\n", nb);
	ft_printf("size + minus:%-5u|\n", nb);
	printf("size + 0:%05u|\n", nb);
	ft_printf("size + 0:%05u|\n", nb);
	printf("size + 0 + prec:%05.3u|\n", nb);
	ft_printf("size + 0 + prec:%05.3u|\n", nb);
	printf("size + minus + prec:%-5.3u|\n", nb);
	ft_printf("size + minus + prec:%-5.3u|\n", nb);
	printf("%-5.3u|\n", nb);
	ft_printf("%-5.3u|\n", nb);
	printf("%-1.45u|\n", nb);
	ft_printf("%-1.45u|\n", nb);
	printf("%-55.35u|\n", nb);	
	ft_printf("%-55.35u|\n", nb);

	return (0);
}
