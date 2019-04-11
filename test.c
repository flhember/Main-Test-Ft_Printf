/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/07 15:55:00 by flhember          #+#    #+#             */
/*   Updated: 2019/03/13 16:15:39 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int main()
{
	char c = 'a';
//	char *s = "salut";
printf("taille d'un float : %lu bytes\n", sizeof(float));
printf("taille d'un double : %lu bytes\n", sizeof(double));

//	ft_printf(" %%c|\n", 0);
//	printf(" %%c|\n", 0);

//	ft_printf(" %c\n", 0);
//	printf(" %c\n", 0);

//	ft_printf("sqr = %-100s|\n", s);
//	printf("str = %-100s|\n", s);

	ft_printf("adq = %p|\n", &c);
	printf("adr = %p|\n", &c);

//	ft_printf("inq =% 05.3d|\n", -45);
//	printf("int =% 05.3d|\n", -45);

//	printf("return ft = %d\n", ft_printf("salut %d\n", 10));
//	printf("return vr = %d\n", printf("salut %d\n", 10));*/
//
//	ft_printf("salut ca va ouai ouai j'ai faim oui", 0);
//	printf("s = %24.0d|\n", 0);

	return (0);
}
