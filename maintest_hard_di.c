/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maintest_hard_di.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/04 18:03:26 by flhember          #+#    #+#             */
/*   Updated: 2019/03/05 11:52:10 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <limits.h>
#include "includes/ft_printf.h"

int		main()
{

	ft_printf("max int :  %d|\n", INT16_MAX);
	printf("max int :  %d|\n", INT16_MAX);
	ft_printf("min int :  %d|\n", INT16_MIN);
	printf("min int :  %d|\n", INT16_MIN);
	ft_printf("max int :  %d|\n", INT32_MAX);
	printf("max int :  %d|\n", INT32_MAX);
	ft_printf("min int :  %d|\n", INT32_MIN);
	printf("min int :  %d|\n", INT32_MIN);
	ft_printf("max long :  %ld|\n", LONG_MAX);
	printf("max long :  %ld|\n", LONG_MAX);
	ft_printf("min long :  %ld|\n", LONG_MIN);
	printf("min long :  %ld|\n", LONG_MIN);
	ft_printf("max long long :  %lld|\n", __LONG_LONG_MAX__);
	printf("max long long :  %lld|\n", __LONG_LONG_MAX__);
	ft_printf("min long long :  %lld|\n",LLONG_MIN);
	printf("min long long :  %lld|\n",LLONG_MIN);

	return (0);
}
