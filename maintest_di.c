/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   miantest.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/26 11:43:19 by flhember          #+#    #+#             */
/*   Updated: 2019/03/28 13:39:06 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int		main()
{
	int		nb;
	
	nb = -45;

	ft_printf("----------ft_printf-test-i-d----------\n");

	ft_printf("space% i|\n", nb);
	printf("space% i|\n", nb);
	ft_printf("plus:%+i|\n", nb);
	printf("plus:%+i|\n", nb);
	ft_printf("precision:%.5i|\n", nb);
	printf("precision:%.5i|\n", nb);
	ft_printf("space + prec:% .5i|\n", nb);
	printf("space + prec:% .5i|\n", nb);
	ft_printf("Plus + prec / grande:%+.5i|\n", nb);
	printf("Plus + prec / grande:%+.5i|\n", nb);
	ft_printf("Prec + 0:%0.5i|\n", nb);
	printf("Prec + 0:%0.5i|\n", nb);
	ft_printf("Prec + minus:%-.5i|\n", nb);
	printf("Prec + minus:%-.5i|\n", nb);
	ft_printf("size:%5i|\n", nb);
	printf("size:%5i|\n", nb);
	ft_printf("size + space:% 5i|\n", nb);
	printf("size + space:% 5i|\n", nb);
	ft_printf("size + plus:%+5i|\n", nb);
	printf("size + plus:%+5i|\n", nb);
	ft_printf("size + minus:%-5i|\n", nb);
	printf("size + minus:%-5i|\n", nb);
	ft_printf("size + 0:%05i|\n", nb);
	printf("size + 0:%05i|\n", nb);
	ft_printf("size + 0 + plus:%+05i|\n", nb);
	printf("size + 0 + plus:%+05i|\n", nb);
	ft_printf("size + 0 + plus:%0+5i|\n", nb);
	printf("size + 0 + plus:%0+5i|\n", nb);
	ft_printf("size + 0 + prec:%05.3i|\n", nb);
	printf("size + 0 + prec:%05.3i|\n", nb);
	ft_printf("size + minus + prec:%-5.3i|\n", nb);
	printf("size + minus + prec:%-5.3i|\n", nb);
	ft_printf("size + plus + 0 + prec:%+05.3i|\n", nb);
	printf("size + plus + 0 + prec:%+05.3i|\n", nb);
	ft_printf("size + espace + zero + prec:%0 5.3i|\n", nb);
	printf("size + espace + zero + prec:%0 5.3i|\n", nb);
	ft_printf("size + espace + zero + prec:% 05.3i|\n", nb);
	printf("size + espace + zero + prec:% 05.3i|\n", nb);
	ft_printf("size + minus + plus + prec:%-+5.3i|\n", nb);
	printf("size + minus + plus + prec:%-+5.3i|\n", nb);
	


	ft_printf("precision:%.0d|\n", 0);
	printf("precision:%.0d|\n", 0);

	return (0);
}
