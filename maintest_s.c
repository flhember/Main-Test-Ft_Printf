/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest_s.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 18:44:16 by flhember          #+#    #+#             */
/*   Updated: 2019/03/06 17:51:07 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "includes/ft_printf.h"

int		main()
{
	char	*str;

	str = "ASD ASDqw ldmj23oi4j32o u89usadjjals j238ujh4 2ojasd  ijo238e 9juasido 8123ue aklnsdk jalhdls";

	ft_printf("test basique:%s|\n", str);
	printf("test basique:%s|\n", str);
	ft_printf("precision / zero:%.0s|\n", str);
	printf("precision / zero:%.0s|\n", str);
	ft_printf("precision / petite:%.5s|\n", str);
	printf("precision / petite:%.5s|\n", str);
	ft_printf("precision / grande:%.15s|\n", str);
	printf("precision / grande:%.15s|\n", str);
	ft_printf("prec + minus:%-.5s|\n", str);
	printf("prec + minus:%-.5s|\n", str);
	ft_printf("size / petite:%5s|\n", str);
	printf("syze / petite:%5s|\n", str);
	ft_printf("size / grande:%15s|\n", str);
	printf("syze / grande:%15s|\n", str);
	ft_printf("Minus + size / petite:%-5s|\n", str);
	printf("Minus + size / petite:%-5s|\n", str);
	ft_printf("Minus + size / grande:%-15s|\n", str);
	printf("Minus + size / grande:%-15s|\n", str);
	ft_printf("Minus + size + prec:%-15.5s|\n", str);
	printf("Minus + size + prec:%-15.5s|\n", str);
	ft_printf("NULL:%12s|\n", NULL);
	printf("NULL:%12s|\n", NULL);
	ft_printf("NULL:%1s|\n", NULL);
	printf("NULL:%1s|\n", NULL);
	ft_printf("NULL:%-5.6s|\n", NULL);
	printf("NULL:%-5.6s|\n", NULL);
	ft_printf("NULL:%-.8s|\n", NULL);
	printf("NULL:%-.8s|\n", NULL);
	ft_printf("NULL:%.12s|\n", NULL);
	printf("NULL:%.12s|\n", NULL);
	ft_printf("empty:%-.5s|\n", "");
	printf("empty:%-.5s|\n", "");
	ft_printf("empty:%-1.32s|\n", "");
	printf("empty:%-1.32s|\n", "");
	ft_printf("empty:%1.4s|\n", "");
	printf("empty:%1.4s|\n", "");
	ft_printf("empty:%23s|\n", "");
	printf("empty:%23s|\n", "");

	return (0);
}
