/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintestprec.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/06 17:43:18 by flhember          #+#    #+#             */
/*   Updated: 2019/03/06 19:46:42 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int main()
{
	int		nb;

	nb = 0;
	ft_printf("null prec : %+.0d|\n", nb);
	printf("null prec : %+.0d|\n", nb);

	nb = 8;
	ft_printf("null prec moi : %+.0d|\n", nb);
	printf("null prec rel : %+.0d|\n", nb);

	nb = -1234212;
	ft_printf("null prec : %+.0d|\n", nb);
	printf("null prec : %+.0d|\n", nb);

	nb = 0;
	ft_printf("null prec : %.0d|\n", nb);
	printf("null prec : %.0d|\n", nb);

	nb = 8;
	ft_printf("null prec : %.0d|\n", nb);
	printf("null prec : %.0d|\n", nb);

	nb = -1234212;
	ft_printf("null prec : %.0d|\n", nb);
	printf("null prec : %.0d|\n", nb);

	nb = 0;
	ft_printf("null prec : %+.0d|\n", nb);
	printf("null prec : %+.0d|\n", nb);
	ft_printf("null prec moi : %+.d|\n", nb);
	printf("null prec rel : %+.d|\n", nb);
	ft_printf("null prec : %.0d|\n", nb);
	printf("null prec : %.0d|\n", nb);
	ft_printf("null prec : %012.0d|\n", nb);
	printf("null prec : %012.0d|\n", nb);
	ft_printf("null prec : %-.0d|\n", nb);
	printf("null prec : %-.0d|\n", nb);
	ft_printf("null prec : %-12.0d|\n", nb);
	printf("null prec : %-12.0d|\n", nb);	
	
	return (0);
}
