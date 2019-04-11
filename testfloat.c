/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfloat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/12 17:13:26 by flhember          #+#    #+#             */
/*   Updated: 2019/03/12 19:31:54 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main()
{
	double d = 12.999;
	float f = 12.1;
	long double lf = 12.999;

	printf("%.50f\n", d);
	printf("%.52f\n", f);
	printf("%.50Lf\n", lf);



	long double a = 12.999;
	printf("%.4Lf\n", a);
	printf("%.5Lf\n", a);
	printf("%.6Lf\n", a);
	printf("%.7Lf\n", a);
	printf("%.8Lf\n", a);
	printf("%.9Lf\n", a);
	printf("%.10Lf\n", a);
	printf("%.11Lf\n", a);
	printf("%.12Lf\n", a);
	printf("%.13Lf\n", a);
	printf("%.14Lf\n", a);
	printf("%.15Lf\n", a);
	printf("%.16Lf\n", a);
	printf("%.17Lf\n", a);
	printf("%.18Lf\n", a);
	printf("%.19Lf\n", a);
	printf("%.20Lf\n", a);
	printf("%.21Lf\n", a);
	printf("%.22Lf\n", a);
	printf("%.23Lf\n", a);
	printf("%.24Lf\n", a);
	printf("%.25Lf\n", a);
	printf("%.26Lf\n", a);
	printf("%.27Lf\n", a);
	printf("%.28Lf\n", a);
	printf("%.29Lf\n", a);
	printf("%.30Lf\n", a);
	printf("12.324999999999999289457264239899814128875732421875\n");
	return (0);
}
