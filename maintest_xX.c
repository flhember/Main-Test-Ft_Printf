/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest_xX.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/08 14:41:43 by flhember          #+#    #+#             */
/*   Updated: 2019/03/08 21:14:38 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int 	main()
{
	int		nb = 1;

//	printf("test ultoa = %s\n", ft_ultoa_base(nb, 16));
//	printf("test perso = %#10.4x|\n", nb);

	printf("%x|\n", nb);
	ft_printf("%x|\n", nb);
	printf("test X:%X|\n", nb);
	ft_printf("test X:%X|\n", nb);
	printf("Hash:%#X|\n", nb);
	ft_printf("Hash:%#X|\n", nb);
	printf("prec / grande:%.5X|\n", nb);
	ft_printf("prec / grande:%.5X|\n", nb);
	printf("prec / petite:%.0X|\n", nb);
	ft_printf("prec / petite:%.0X|\n", nb);
	printf("hash + prec / grande:%#.5X|\n", nb);
	ft_printf("hash + prec / grande:%#.5X|\n", nb);
	printf("hash + prec / petite:%#.1X|\n", nb);
	ft_printf("hash + prec / petite:%#.1X|\n", nb);
	printf("prec + 0: %0.5X|\n", nb);
	ft_printf("prec + 0: %0.5X|\n", nb);
	printf("Prec + minus:%-.5X|\n", nb);
	ft_printf("Prec + minus:%-.5X|\n", nb);
	printf("size:%5X|\n", nb);
	ft_printf("size:%5X|\n", nb);
	printf("size + prec:%7.3X|\n", nb);
	ft_printf("size + prec:%7.3X|\n", nb);
	printf("size + mminus:%-5X|\n", nb);
	ft_printf("size + mminus:%-5X|\n", nb);
	printf("size + 0:%05X|\n", nb);
	ft_printf("size + 0:%05X|\n", nb);
	printf("size + 0 + hash:%#05X|\n", nb);
	ft_printf("size + 0 + hash:%#05X|\n", nb);
	printf("size + 0 + prec:%05.3X|\n", nb);
	ft_printf("size + 0 + prec:%05.3X|\n", nb);
	printf("size + minus + prec:%-5.3X|\n", nb);
	ft_printf("size + minus + prec:%-5.3X|\n", nb);
	printf("size + hash + 0 + prec:%#05.3X|\n", nb);
	ft_printf("size + hash + 0 + prec:%#05.3X|\n", nb);
	printf("size + hash + 0 + prec:%0#5.3X|\n", nb);
	ft_printf("size + hash + 0 + prec:%0#5.3X|\n", nb);
	printf("size + hash + minus + prec:%-#7.3X|\n", nb);
	ft_printf("size + hash + minus + prec:%-#7.3X|\n", nb);

	return (0);
}
