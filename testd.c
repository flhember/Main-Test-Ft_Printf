/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testd.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/05 12:40:46 by flhember          #+#    #+#             */
/*   Updated: 2019/03/06 20:30:02 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int main()
{
	int d;
	d = 23232323;

	printf("\t\tFLAGS\n\n");
    ft_printf("ft_printf\tflag : [rien]\t\t[%d]\n", d);
    printf("printf:\t\tflag : [rien]\t\t[%d]\n", d);
    ft_printf("ft_printf\tflag : [+]\t\t[%+d]\n", d);
    printf("printf:\t\tflag : [+]\t\t[%+d]\n", d);
    ft_printf("ft_printf\tflag : [-]\t\t[%-d]\n", d);
    printf("printf:\t\tflag : [-]\t\t[%-d]\n", d);
    ft_printf("ft_printf\tflag : [+-]\t\t[%+-d]\n", d);
    printf("printf:\t\tflag : [+-]\t\t[%+-d]\n", d);
    ft_printf("ft_printf\tflag : [-+]\t\t[%-+d]\n", d);
    printf("printf:\t\tflag : [-+]\t\t[%-+d]\n", d);
    ft_printf("ft_printf\tflag : [' ']\t\t[% d]\n", d);
    printf("printf:\t\tflag : [' ']\t\t[% d]\n", d);
    ft_printf("ft_printf\tflag : [- ' ']\t\t[%- d]\n", d);
    printf("printf:\t\tflag : [- ' ']\t\t[%- d]\n", d);
    ft_printf("ft_printf\tflag : [0]\t\t[%0d]\n", d);
    printf("printf:\t\tflag : [0]\t\t[%0d]\n", d);
    ft_printf("ft_printf\tflag : [0+]\t\t[%0+d]\n", d);
    printf("printf:\t\tflag : [0+]\t\t[%0+d]\n", d);
    
    printf("\n\t\tWIDTH + flags\n\n");
    ft_printf("ft_printf\tflag : [24]\t\t[%24d]\n", 0);
    printf("printf:\t\tflag : [24]\t\t[%24d]\n", 0);
    ft_printf("ft_printf\tflag : [024]\t\t[%024d]\n", 0);
    printf("printf:\t\tflag : [024]\t\t[%024d]\n", 0);
    ft_printf("ft_printf\tflag : [24.0]\t\t[%24.0d]\n", 0);
    printf("printf:\t\tflag : [24.0]\t\t[%24.0d]\n", 0);
    ft_printf("ft_printf\tflag : [-24.0]\t\t[%-24.0d]\n", 0);
    printf("printf:\t\tflag : [-24.0]\t\t[%-24.0d]\n", 0);
    ft_printf("ft_printf\tflag : [-24.1]\t\t[%-24.1d]\n", 0);
    printf("printf:\t\tflag : [-24.1]\t\t[%-24.1d]\n", 0);
    ft_printf("ft_printf\tflag : [024]\t\t[%024d]\n", 0);
    printf("printf:\t\tflag : [024]\t\t[%024d]\n", 0);
    ft_printf("ft_printf\tflag : [ 24]\t\t[% 24d]\n", d);
    printf("printf:\t\tflag : [ 24]\t\t[% 24d]\n", d);
    ft_printf("ft_printf\tflag : [24]\t\t[%24d]\n", d);
    printf("printf:\t\tflag : [24]\t\t[%24d]\n", d);
    ft_printf("ft_printf\tflag : [024]\t\t[%024d]\n", d);
    printf("printf:\t\tflag : [024]\t\t[%024d]\n", d);
    ft_printf("ft_printf\tflag : [24]\t\t[%24d]\n", d);
    printf("printf:\t\tflag : [24]\t\t[%24d]\n", d);
    ft_printf("ft_printf\tflag : [+24]\t\t[%+24d]\n", d);
    printf("printf:\t\tflag : [+24]\t\t[%+24d]\n", d);
    ft_printf("ft_printf\tflag : [-24]\t\t[%-24d]\n", d);
    printf("printf:\t\tflag : [-24]\t\t[%-24d]\n", d);
    ft_printf("ft_printf\tflag : [+024]\t\t[%+024d]\n", d);
    printf("printf:\t\tflag : [+024]\t\t[%+024d]\n", d);
    ft_printf("ft_printf\tflag : [04]\t\t[%04d]\n", d);
    printf("printf:\t\tflag : [04]\t\t[%04d]\n", d);
    ft_printf("ft_printf\tflag : [+04]\t\t[%+04d]\n", d);
    printf("printf:\t\tflag : [+04]\t\t[%+04d]\n", d);
    ft_printf("ft_printf\tflag : [+4]\t\t[%+4d]\n", d);
    printf("printf:\t\tflag : [+4]\t\t[%+4d]\n", d);
    ft_printf("ft_printf\tflag : [-+24]\t\t[%-+24d]\n", d);
    printf("printf:\t\tflag : [-+24]\t\t[%-+24d]\n", d);
    //printf("printf:\t\tflag : [-24]\t\t[%-24d]\n", d);
    //printf("printf:\t\tflag : [+24]\t\t[%+24d]\n", d);
    printf("printf:\t\tflag : [24]\t\t[%24d]\n", d);
    
    ft_printf("ft_printf\tflag : [24]\t\t[%24d]\n", d);
    //ft_printf("ft_printf\tflag : [' ']\t\t[% 24d]\n", d);
    //ft_printf("ft_printf\tflag : [-]\t\t[%-d]\n", d);
    //ft_printf("ft_printf\tflag : [- ' ']\t\t[%- d]\n", d);
    //ft_printf("ft_printf\tflag : [-24]\t\t[%-24d]\n", d);
    ft_printf("ft_printf\tflag : [- ' '24]\t[%- 24d]\n", d);
    printf("printf:\t\tflag : [- ' '24]\t[%- 24d]\n", d);
    //printf("printf:\t\tflag : [- ' ']\t\t[%- d]\n", d);
    //printf("printf:\t\tflag : [' '24]\t\t[% 24d]\n", d);
    //printf("printf:\t\tflag : [-24]\t\t[%-24d]\n", d);
    //printf("printf:\t\tflag : [24]\t\t[%24d]\n", d);
    ft_printf("ft_printf\tflag : [2]\t\t[%2d]\n", d);
    printf("printf:\t\tflag : [2]\t\t[%2d]\n", d);
    printf("\n\t\tPRECISION + flags\n\n");
    ft_printf("ft_printf\tflag : [.3]\t\t[%.3d]\n", d);
    printf("printf:\t\tflag : [.3]\t\t[%.3d]\n", d);
    ft_printf("ft_printf\tflag : [.2]\t\t[%.2d]\n", d);
    printf("printf:\t\tflag : [.2]\t\t[%.2d]\n", d);
    ft_printf("ft_printf\tflag : [+.42]\t\t[%+.42d]\n", d);
    printf("printf:\t\tflag : [+.42]\t\t[%+.42d]\n", d);
    ft_printf("ft_printf\tflag : [-.42]\t\t[%-.42d]\n", d);
    printf("printf:\t\tflag : [-.42]\t\t[%-.42d]\n", d);
    ft_printf("ft_printf\tflag : [+-.42]\t\t[%+-.42d]\n", d);
    printf("printf:\t\tflag : [+-.42]\t\t[%+-.42d]\n", d);
    ft_printf("ft_printf\tflag : [-+.42]\t\t[%-+.42d]\n", d);
    printf("printf:\t\tflag : [-+.42]\t\t[%-+.42d]\n", d);
    ft_printf("ft_printf\tflag : [' '.42]\t\t[% .42d]\n", d);
    printf("printf:\t\tflag : [' '.42]\t\t[% .42d]\n", d);
    ft_printf("ft_printf\tflag : [- ' '.42]\t[%- .42d]\n", d);
    printf("printf:\t\tflag : [- ' '.42]\t[%- .42d]\n", d);
    
    
    printf("\n\t\tWIDTH + PRECISION + flags\n\n");
    ft_printf("ft_printf\tflag : [24.42]\t\t[%24.42d]\n", d);
    printf("printf:\t\tflag : [24.42]\t\t[%24.42d]\n", d);
    ft_printf("ft_printf\tflag : [024.42]\t\t[%024.42d]\n", d);
    printf("printf:\t\tflag : [024.42]\t\t[%024.42d]\n", d);
    ft_printf("ft_printf\tflag : [0.42]\t\t[%0.42d]\n", d);
    printf("printf:\t\tflag : [0.42]\t\t[%0.42d]\n", d);
    ft_printf("ft_printf\tflag : [24.0]\t\t[%24.0d]\n", d);
    printf("printf:\t\tflag : [24.0]\t\t[%24.0d]\n", d);
    ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0d]\n", d);
    printf("printf:\t\tflag : [0.0]\t\t[%0.0d]\n", d);
    ft_printf("ft_printf\tflag : [+24.42]\t\t[%+24.42d]\n", d);
    printf("printf:\t\tflag : [+24.42]\t\t[%+24.42d]\n", d);
    ft_printf("ft_printf\tflag : [-24.42]\t\t[%-24.42d]\n", d);
    printf("printf:\t\tflag : [-24.42]\t\t[%-24.42d]\n", d);
    ft_printf("ft_printf\tflag : [+-24.42]\t[%+-24.42d]\n", d);
    printf("printf:\t\tflag : [+-24.42]\t[%+-24.42d]\n", d);
    ft_printf("ft_printf\tflag : [' '24.42]\t[% 24.42d]\n", d);
    printf("printf:\t\tflag : [' '24.42]\t[% 24.42d]\n", d);
    ft_printf("ft_printf\tflag : [' '0.42]\t[% 0.42d]\n", d);
    printf("printf:\t\tflag : [' '0.42]\t[% 0.42d]\n", d);
    ft_printf("ft_printf\tflag : [' '24.0]\t[% 24.0d]\n", d);
    printf("printf:\t\tflag : [' '24.0]\t[% 24.0d]\n", d);
    ft_printf("ft_printf\tflag : [- ' '24.42]\t[%- 24.42d]\n", d);
    printf("printf:\t\tflag : [- ' '24.42]\t[%- 24.42d]\n", d);
    ft_printf("ft_printf\tflag : [0 ' '24.42]\t[%0 24.42d]\n", d);
    printf("printf:\t\tflag : [0 ' '24.42]\t[%0 24.42d]\n", d);
    ft_printf("ft_printf\tflag : [+++24.42]\t[%24.42d]\n", d);
    printf("printf:\t\tflag : [+++24.42]\t[%24.42d]\n", d);
    ft_printf("ft_printf\tflag : [-+-24.42]\t[%-+-24.42d]\n", d);
    printf("printf:\t\tflag : [-+-24.42]\t[%-+-24.42d]\n", d);
    ft_printf("ft_printf\tflag : [+00+24.42]\t[%+00+24.42d]\n", d);
    printf("printf:\t\tflag : [+00+24.42]\t[%+00+24.42d]\n", d);
    ft_printf("ft_printf\tflag : [-5.3]\t\t[%-5.3d]\n", d);
    printf("printf:\t\tflag : [-5.3]\t\t[%-5.3d]\n", d);
    ft_printf("ft_printf\tflag : [-+5.3]\t\t[%-+5.3d]\n", d);
    printf("printf:\t\tflag : [-+5.3]\t\t[%-+5.3d]\n", d);
    ft_printf("ft_printf\tflag : [-3.5]\t\t[%-3.5d]\n", d);
    printf("printf:\t\tflag : [-3.5]\t\t[%-3.5d]\n", d);
    ft_printf("ft_printf\tflag : [-+3.5]\t\t[%-+3.5d]\n", d);
    printf("printf:\t\tflag : [-+3.5]\t\t[%-+3.5d]\n", d);
    
    ft_printf("ft_printf\tflag : [.0]\t[%.0d]\n", 0);
    printf("printf:\t\tflag : [.0]\t[%.0d]\n", 0);
    ft_printf("ft_printf\tflag : [0.0]\t[%0.0d]\n", 0);
    printf("printf:\t\tflag : [0.0]\t[%0.0d]\n", 0);

	return 0;
}
