/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainall.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flhember <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/11 15:38:24 by flhember          #+#    #+#             */
/*   Updated: 2019/03/27 16:13:18 by flhember         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int main()
{
	    char *str = "";
     char c = '0';
    int d = 0;
    int d_octal = 0;
    unsigned short us_octal = '0';
   
    short s = 0;
     long int e = 0;
   
    long long int f = 0;
 
    printf("%d\n", -678);
    ft_printf("%d\n", -678);
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
 
   
    ft_printf("test basique:%s\n", str);
    printf("test basique:%s\n", str);
    ft_printf("test basique:[%42.2s]\n", str);
    printf("test basique:[%42.2s]\n", str);
    ft_printf("precision / zero:%.0s\n", str);
    printf("precision / zero:%.0s\n", str);
    ft_printf("precision / petite:%.2s\n", str);
    printf("precision / petite:%.2s\n", str);
    ft_printf("precision / grande:[%.15s]\n", str);
    printf("precision / grande:[%.15s]\n", str);
    ft_printf("prec + minus:%-.5s\n", str);
    printf("prec + minus:%-.5s\n", str);
    ft_printf("size / petite:%5s\n", str);
    printf("size / petite:%5s\n", str);
    ft_printf("size / grande:%15s\n", str);
    printf("size / grande:%15s\n", str);
    ft_printf("Minus + size / petite:%-5s\n", str);
    printf("Minus + size / petite:%-5s\n", str);
    ft_printf("Minus + size / grande:%-15s\n", str);
    printf("Minus + size / grande:%-15s\n", str);
    ft_printf("Minus + size + prec:%-15.5s\n", str);
    printf("Minus + size + prec:%-15.5s\n", str);
    ft_printf("NULL:%12s\n", NULL);
    printf("NULL:%12s\n", NULL);
    ft_printf("NULL:%1s\n", NULL);
    printf("NULL:%1s\n", NULL);
    ft_printf("NULL:%-5.6s\n", NULL);
    printf("NULL:%-5.6s\n", NULL);
    ft_printf("NULL:%-.8s\n", NULL);
    printf("NULL:%-.8s\n", NULL);
    ft_printf("NULL:%.12s\n", NULL);
    printf("NULL:%.12s\n", NULL);
    ft_printf("empty:%-.5s\n", "");
    printf("empty:%-.5s\n", "");
    ft_printf("empty:%-1.32s\n", "");
    printf("empty:%-1.32s\n", "");
    ft_printf("empty:%1.4s\n", "");
    printf("empty:%1.4s\n", "");
    ft_printf("empty:%23s\n", "");
    printf("empty:%23s\n", "");
 
 
/*
    ****************************************
                START STR TEST
    *****************************************
*/
 
 
 
    printf("***************************************\n");
    printf ("\t\tSTR TEST\n");
    printf("***************************************\n\n");
 
    ft_printf("ft_printf:\t[%s]\n", str);
    printf("printf:\t\t[%s]\n", str);
    ft_printf("ft_printf:\t[%-s]\n", str);
    printf("printf:\t\t[%-s]\n", str);
    ft_printf("ft_printf:\t[%24s]\n", str);
    printf("printf:\t\t[%24s]\n", str);
    ft_printf("ft_printf:\t[%2s]\n", str);
    printf("printf:\t\t[%2s]\n", str);
    ft_printf("ft_printf:\t[%-24s]\n", str);
    printf("printf:\t\t[%-24s]\n", str);
    ft_printf("ft_printf:\t[%-2s]\n", str);
    printf("printf:\t\t[%-2s]\n", str);
    ft_printf("ft_printf:\t[%.54s]\n", str);
    printf("printf:\t\t[%.54s]\n", str);
    ft_printf("ft_printf:\t[%.2s]\n", str);
    printf("printf:\t\t[%.2s]\n", str);
    ft_printf("ft_printf:\t[%24.2s]\n", str);
    printf("printf:\t\t[%24.2s]\n", str);
    ft_printf("ft_printf:\t[%24.54s]\n", str);
    printf("printf:\t\t[%24.54s]\n", str);

    ft_printf("ft_printf:\t[%2.2s]\n", str);
    printf("printf:\t\t[%2.2s]\n", str);

    ft_printf("ft_printf:\t[%2.54s]\n", str);
    printf("printf:\t\t[%2.54s]\n", str);
    ft_printf("ft_printf:\t[%-24.2s]\n", str);
    printf("printf:\t\t[%-24.2s]\n", str);
    ft_printf("ft_printf:\t[%-24.54s]\n", str);
    printf("printf:\t\t[%-24.54s]\n", str);
    ft_printf("ft_printf:\t[%-.54s]\n", str);
    printf("printf:\t\t[%-.54s]\n", str);
    ft_printf("ft_printf:\t[%-.2s]\n", str);
    printf("printf:\t\t[%-.2s]\n", str);
 
 
/*
    ****************************************
                END STR TEST
    *****************************************
*/
 
/*
    ****************************************
                START CHAR TEST
    *****************************************
*/
 
    printf("\n\n***************************************\n");
    printf ("\t\tCHAR TEST\n");
    printf("***************************************\n\n");
 
    ft_printf("ft_printf:\t[%c]\n", c);
    printf("printf:\t\t[%c]\n", c);
    ft_printf("ft_printf:\t[%-c]\n", c);
    printf("printf:\t\t[%-c]\n", c);
    ft_printf("ft_printf:\t[%1c]\n", c);
    printf("printf:\t\t[%1c]\n", c);
    ft_printf("ft_printf:\t[%24c]\n", c);
    printf("printf:\t\t[%24c]\n", c);
    ft_printf("ft_printf:\t[%-24c]\n", c);
    printf("printf:\t\t[%-24c]\n", c);
   
/*
    ****************************************
                END CHAR TEST
    *****************************************
*/
 
/*
    ****************************************
                START PTR TEST
    *****************************************
*/
 
    printf("\n\n***************************************\n");
    printf ("\t\tPTR TEST\n");
    printf("***************************************\n\n");
   
    ft_printf("ft_printf:\t[%p]\n", &c);
    printf("printf:\t\t[%p]\n", &c);
    ft_printf("ft_printf:\t[%2p]\n", &c);
    printf("printf:\t\t[%2p]\n", &c);
    ft_printf("ft_printf:\t[%24p]\n", &c);
    printf("printf:\t\t[%24p]\n", &c);
    ft_printf("ft_printf:\t[%-p]\n", &c);
    printf("printf:\t\t[%-p]\n", &c);
    ft_printf("ft_printf:\t[%-2p]\n", &c);
    printf("printf:\t\t[%-2p]\n", &c);
    ft_printf("ft_printf:\t[%-24p]\n", &c);
    printf("printf:\t\t[%-24p]\n", &c);
    ft_printf("ft_printf:\t[%-24p]\n", &e);
    printf("printf:\t\t[%-24p]\n", &e);
   
   
/*
    ****************************************
                END PTR TEST
    *****************************************
*/
 
/*
    ****************************************
                START INT TEST
    *****************************************
*/
 
    printf("\n\n***************************************\n");
    printf ("\t\tINT TEST\n");
    printf("***************************************\n\n");
 
 
 
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
 
/*
    ****************************************
                END INT TEST
    *****************************************
*/
 
/*
    ****************************************
                START SHORT TEST
    *****************************************
*/
 
    printf("\n\n***************************************\n");
    printf ("\t\tSHORT o TEST\n");
    printf("***************************************\n\n");
 
    ft_printf("ft_printf:\t[%- d]\n", s);
    printf("printf:\t\t[%- d]\n\n", s);
    ft_printf("ft_printf:\t[%d]\n", s);
    printf("printf:\t\t[%d]\n\n", s);
    ft_printf("ft_printf:\t[%hd]\n", s);
    printf("printf:\t\t[%hd]\n\n", s);
    ft_printf("ft_printf:\t[%hd]\n", s);
    printf("printf:\t\t[%hd]\n\n", s);
    ft_printf("ft_printf:\t[%-hd]\n", s);
    printf("printf:\t\t[%-hd]\n\n", s);
    ft_printf("ft_printf:\t[%+hd]\n", s);
    printf("printf:\t\t[%+hd]\n\n", s);
    ft_printf("ft_printf:\t[%24hd]\n", s);
    printf("printf:\t\t[%24hd]\n\n", s);
    ft_printf("ft_printf:\t[%2hd]\n", s);
    printf("printf:\t\t[%2hd]\n\n", s);
    ft_printf("ft_printf:\t[%.24hd]\n", s);
    printf("printf:\t\t[%.24hd]\n\n", s);
    ft_printf("ft_printf:\t[%.2hd]\n", s);
    printf("printf:\t\t[%.2hd]\n\n", s);

    ft_printf("ft_printf:\t[%24.2hd]\n", s);
    printf("printf:\t\t[%24.2hd]\n\n", s);

    ft_printf("ft_printf:\t[%24.24hd]\n", s);
    printf("printf:\t\t[%24.24hd]\n\n", s);

    ft_printf("ft_printf:\t[%24.28hd]\n", s);
    printf("printf:\t\t[%24.28hd]\n\n", s);
    ft_printf("ft_printf:\t[%28.24hd]\n", s);
    printf("printf:\t\t[%28.24hd]\n\n", s);
    ft_printf("ft_printf:\t[%2.28hd]\n", s);
    printf("printf:\t\t[%2.28hd]\n\n", s);
    ft_printf("ft_printf:\t[%2.5hd]\n", s);
    printf("printf:\t\t[%2.5hd]\n\n", s);
    ft_printf("ft_printf:\t[%-24hd]\n", s);
    printf("printf:\t\t[%-24hd]\n\n", s);
    ft_printf("ft_printf:\t[%-5hd]\n", s);
    printf("printf:\t\t[%-5hd]\n\n", s);
   
/*
    ****************************************
                END SHORT TEST
    *****************************************
*/
 
/*
    ****************************************
                START LONG TEST
    *****************************************
*/
   
    printf("\n\n***************************************\n");
    printf ("\t\tLONG TEST\n");
    printf("***************************************\n\n");
 
    ft_printf("ft_printf:\t[%ld]\n", e);
    printf("printf:\t\t[%ld]\n\n", e);
    ft_printf("ft_printf:\t[%-ld]\n", e);
    printf("printf:\t\t[%-ld]\n\n", e);
    ft_printf("ft_printf:\t[%+ld]\n", e);
    printf("printf:\t\t[%+ld]\n\n", e);
    ft_printf("ft_printf:\t[% ld]\n", e);
    printf("printf:\t\t[% ld]\n\n", e);
    ft_printf("ft_printf:\t[%0ld]\n", e);
    printf("printf:\t\t[%0ld]\n\n", e);
    ft_printf("ft_printf:\t[%12ld]\n", e);
    printf("printf:\t\t[%12ld]\n\n", e);
    ft_printf("ft_printf:\t[%48ld]\n", e);
    printf("printf:\t\t[%48ld]\n\n", e);
    ft_printf("ft_printf:\t[%.12ld]\n", e);
    printf("printf:\t\t[%.12ld]\n\n", e);
    ft_printf("ft_printf:\t[%.48ld]\n", e);
    printf("printf:\t\t[%.48ld]\n\n", e);
    ft_printf("ft_printf:\t[%-48ld]\n", e);
    printf("printf:\t\t[%-48ld]\n\n", e);
    ft_printf("ft_printf:\t[%-.48ld]\n", e);
    printf("printf:\t\t[%-.48ld]\n\n", e);
    ft_printf("ft_printf:\t[%2.48ld]\n", e);
    printf("printf:\t\t[%2.48ld]\n\n", e);
    ft_printf("ft_printf:\t[%2.2ld]\n", e);
    printf("printf:\t\t[%2.2ld]\n\n", e);
    ft_printf("ft_printf:\t[%-+ld]\n", e);
    printf("printf:\t\t[%-+ld]\n\n", e);
    ft_printf("ft_printf:\t[%+-ld]\n", e);
    printf("printf:\t\t[%+-ld]\n\n", e);
    ft_printf("ft_printf:\t[%+ld]\n", -e);
    printf("printf:\t\t[%+ld]\n\n", -e);
 
/*
    ****************************************
                END LONG TEST
    *****************************************
*/
 
/*
    ****************************************
                START LONG LONG TEST
    *****************************************
*/
 
    printf("\n\n***************************************\n");
    printf ("\t\tLONG LONG TEST\n");
    printf("***************************************\n\n");
 
    ft_printf("ft_printf:\t[%lld]\n", f);
    printf("printf:\t\t[%lld]\n\n", f);
    ft_printf("ft_printf:\t[%-lld]\n", f);
    printf("printf:\t\t[%-lld]\n\n", f);
    ft_printf("ft_printf:\t[%+lld]\n", f);
    printf("printf:\t\t[%+lld]\n\n", f);
    ft_printf("ft_printf:\t[% lld]\n", f);
    printf("printf:\t\t[% lld]\n\n", f);
    ft_printf("ft_printf:\t[%0lld]\n", f);
    printf("printf:\t\t[%0lld]\n\n", f);
    ft_printf("ft_printf:\t[%12lld]\n", f);
    printf("printf:\t\t[%12lld]\n\n", f);
    ft_printf("ft_printf:\t[%48lld]\n", f);
    printf("printf:\t\t[%48lld]\n\n", f);
    ft_printf("ft_printf:\t[%.12lld]\n", f);
    printf("printf:\t\t[%.12lld]\n\n", f);
    ft_printf("ft_printf:\t[%.48lld]\n", f);
    printf("printf:\t\t[%.48lld]\n\n", f);
    ft_printf("ft_printf:\t[%-48lld]\n", f);
    printf("printf:\t\t[%-48lld]\n\n", f);
    ft_printf("ft_printf:\t[%-.48lld]\n", f);
    printf("printf:\t\t[%-.48lld]\n\n", f);
    ft_printf("ft_printf:\t[%2.48lld]\n", f);
    printf("printf:\t\t[%2.48lld]\n\n", f);
    ft_printf("ft_printf:\t[%2.2lld]\n", f);
    printf("printf:\t\t[%2.2lld]\n\n", f);
    ft_printf("ft_printf:\t[%-+lld]\n", f);
    printf("printf:\t\t[%-+lld]\n\n", f);
    ft_printf("ft_printf:\t[%+-lld]\n", f);
    printf("printf:\t\t[%+-lld]\n\n", f);
    ft_printf("ft_printf:\t[%+lld]\n", -f);
    printf("printf:\t\t[%+lld]\n\n", -f);
   
/*
    ****************************************
                END LONG LONG TEST
    *****************************************
*/
 
/*
    ****************************************
                START OCTAL TEST
    *****************************************
*/
    printf("\n\n***************************************\n");
    printf ("\t\tOCTAL TEST\n");
    printf("***************************************\n\n");
 
    ft_printf("ft_printf\tflag : [rien]\t\t[%o]\n", 0);
    printf("printf:\t\tflag : [rien]\t\t[%o]\n", 0);
    ft_printf("ft_printf\tflag : [.0]\t\t[%.0o]\n", 0);
    printf("printf:\t\tflag : [.0]\t\t[%.0o]\n", 0);
    ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0o]\n", 0);
    printf("printf:\t\tflag : [0.0]\t\t[%0.0o]\n", 0);
    ft_printf("ft_printf\tflag : [0.1]\t\t[%0.1o]\n", 0);
    printf("printf:\t\tflag : [0.1]\t\t[%0.1o]\n", 0);
    ft_printf("ft_printf\tflag : [1.0]\t\t[%1.0o]\n", 0);
    printf("printf:\t\tflag : [1.0]\t\t[%1.0o]\n", 0);
    ft_printf("ft_printf\tflag : [01.1]\t\t[%01.1o]\n", 0);
    printf("printf:\t\tflag : [01.1]\t\t[%01.1o]\n", 0);
    ft_printf("ft_printf\tflag : [rien]\t\t[%o]\n", d_octal);
    printf("printf:\t\tflag : [rien]\t\t[%o]\n", d_octal);
    ft_printf("ft_printf\tflag : [24]\t\t[%24o]\n", d_octal);
    printf("printf:\t\tflag : [24]\t\t[%24o]\n", d_octal);
    ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0o]\n", d_octal);
    printf("printf:\t\tflag : [0.0]\t\t[%0.0o]\n", d_octal);
    ft_printf("ft_printf\tflag : [0]\t\t[%0o]\n", d_octal);
    printf("printf:\t\tflag : [0]\t\t[%0o]\n", d_octal);
    ft_printf("ft_printf\tflag : [24.0]\t\t[%24.0o]\n", d_octal);
    printf("printf:\t\tflag : [24.0]\t\t[%24.0o]\n", d_octal);
    ft_printf("ft_printf\tflag : [24.1]\t\t[%24.1o]\n", d_octal);
    printf("printf:\t\tflag : [24.1]\t\t[%24.1o]\n", d_octal);
    ft_printf("ft_printf\tflag : [24.5]\t\t[%24.5o]\n", d_octal);
    printf("printf:\t\tflag : [24.5]\t\t[%24.5o]\n", d_octal);
    ft_printf("ft_printf\tflag : [-24]\t\t[%-24o]\n", d_octal);
    printf("printf:\t\tflag : [-24]\t\t[%-24o]\n", d_octal);
    ft_printf("ft_printf\tflag : [.0]\t\t[%.0o]\n", d_octal);
    printf("printf:\t\tflag : [.0]\t\t[%.0o]\n", d_octal);
    ft_printf("ft_printf\tflag : [.42]\t\t[%.42o]\n", d_octal);
    printf("printf:\t\tflag : [.42]\t\t[%.42o]\n", d_octal);
    ft_printf("ft_printf\tflag : [-.42]\t\t[%-.42o]\n", d_octal);
    printf("printf:\t\tflag : [-.42]\t\t[%-.42o]\n", d_octal);
    ft_printf("ft_printf\tflag : [h]\t\t[%ho]\n", us_octal);
    printf("printf:\t\tflag : [h]\t\t[%ho]\n", us_octal);
    ft_printf("ft_printf\tflag : [24h]\t\t[%24ho]\n", us_octal);
    printf("printf:\t\tflag : [24h]\t\t[%24ho]\n", us_octal);
    ft_printf("ft_printf\tflag : [024h]\t\t[%024ho]\n", us_octal);
    printf("printf:\t\tflag : [024h]\t\t[%024ho]\n", us_octal);
    ft_printf("ft_printf\tflag : [-24h]\t\t[%-24ho]\n", us_octal);
    printf("printf:\t\tflag : [-24h]\t\t[%-24ho]\n", us_octal);
    ft_printf("ft_printf\tflag : [0h]\t\t[%0ho]\n", us_octal);
    printf("printf:\t\tflag : [0h]\t\t[%0ho]\n", us_octal);
    ft_printf("ft_printf\tflag : [.0h]\t\t[%.0ho]\n", us_octal);
    printf("printf:\t\tflag : [.0h]\t\t[%.0ho]\n", us_octal);
    ft_printf("ft_printf\tflag : [0.0h]\t\t[%0.0ho]\n", us_octal);
    printf("printf:\t\tflag : [0.0h]\t\t[%0.0ho]\n", us_octal);
    ft_printf("ft_printf\tflag : [5.3h]\t\t[%5.3ho]\n", us_octal);
    printf("printf:\t\tflag : [5.3h]\t\t[%5.3ho]\n", us_octal);
    ft_printf("ft_printf\tflag : [2.6h]\t\t[%2.6ho]\n", us_octal);
    printf("printf:\t\tflag : [2.6h]\t\t[%2.6ho]\n", us_octal);
    ft_printf("ft_printf\tflag : [-2.6h]\t\t[%-2.6ho]\n", us_octal);
    printf("printf:\t\tflag : [-2.6h]\t\t[%-2.6ho]\n", us_octal);
    ft_printf("ft_printf\tflag : [-5.3h]\t\t[%-5.3ho]\n", us_octal);
    printf("printf:\t\tflag : [-5.3h]\t\t[%-5.3ho]\n", us_octal);
   
    printf("\n\n***************************************\n");
    printf ("\t\tLONG LONG OCTAL TEST\n");
    printf("***************************************\n\n");
    ft_printf("ft_printf\tflag : [ll]\t\t[%llo]\n", __LONG_LONG_MAX__);
    printf("printf:\t\tflag : [ll]\t\t[%llo]\n", __LONG_LONG_MAX__);
    ft_printf("ft_printf\tflag : [.42ll]\t\t[%.42llo]\n", __LONG_LONG_MAX__);
    printf("printf:\t\tflag : [.42ll]\t\t[%.42llo]\n", __LONG_LONG_MAX__);
    ft_printf("ft_printf\tflag : [24ll]\t\t[%24llo]\n", __LONG_LONG_MAX__);
    printf("printf:\t\tflag : [24ll]\t\t[%24llo]\n", __LONG_LONG_MAX__);
    ft_printf("ft_printf\tflag : [024ll]\t\t[%024llo]\n", __LONG_LONG_MAX__);
    printf("printf:\t\tflag : [024ll]\t\t[%024llo]\n", __LONG_LONG_MAX__);
    ft_printf("ft_printf\tflag : [-42ll]\t\t[%-42llo]\n", __LONG_LONG_MAX__);
    printf("printf:\t\tflag : [-42ll]\t\t[%-42llo]\n", __LONG_LONG_MAX__);
 
    ft_printf("ft_printf\tflag : [ll]\t\t[%llo]\n", LLONG_MIN);
    printf("printf:\t\tflag : [ll]\t\t[%llo]\n", LLONG_MIN);
    ft_printf("ft_printf\tflag : [.42ll]\t\t[%.42llo]\n", LLONG_MIN);
    printf("printf:\t\tflag : [.42ll]\t\t[%.42llo]\n", LLONG_MIN);
    ft_printf("ft_printf\tflag : [24ll]\t\t[%24llo]\n", LLONG_MIN);
    printf("printf:\t\tflag : [24ll]\t\t[%24llo]\n", LLONG_MIN);
    ft_printf("ft_printf\tflag : [024ll]\t\t[%024llo]\n", LLONG_MIN);
    printf("printf:\t\tflag : [024ll]\t\t[%024llo]\n", LLONG_MIN);
    ft_printf("ft_printf\tflag : [-42ll]\t\t[%-42llo]\n", LLONG_MIN);
    printf("printf:\t\tflag : [-42ll]\t\t[%-42llo]\n", LLONG_MIN);
   
    printf("\n\n***************************************\n");
    printf ("\t\tLONG OCTAL TEST\n");
    printf("***************************************\n\n");
    ft_printf("ft_printf\tflag : [l]\t\t[%lo]\n", LONG_MIN);
    printf("printf:\t\tflag : [l]\t\t[%lo]\n", LONG_MIN);
    ft_printf("ft_printf\tflag : [.42l]\t\t[%.42lo]\n", LONG_MIN);
    printf("printf:\t\tflag : [.42l]\t\t[%.42lo]\n", LONG_MIN);
    ft_printf("ft_printf\tflag : [24l]\t\t[%24lo]\n", LONG_MIN);
    printf("printf:\t\tflag : [24l]\t\t[%24lo]\n", LONG_MIN);
    ft_printf("ft_printf\tflag : [024l]\t\t[%024lo]\n", LONG_MIN);
    printf("printf:\t\tflag : [024l]\t\t[%024lo]\n", LONG_MIN);
    ft_printf("ft_printf\tflag : [-42l]\t\t[%-42lo]\n", LONG_MIN);
    printf("printf:\t\tflag : [-42l]\t\t[%-42lo]\n", LONG_MIN);
   
    ft_printf("ft_printf\tflag : [l]\t\t[%lo]\n", LONG_MAX);
    printf("printf:\t\tflag : [l]\t\t[%lo]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [.42l]\t\t[%.42lo]\n", LONG_MAX);
    printf("printf:\t\tflag : [.42l]\t\t[%.42lo]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [24l]\t\t[%24lo]\n", LONG_MAX);
    printf("printf:\t\tflag : [24l]\t\t[%24lo]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [024l]\t\t[%024lo]\n", LONG_MAX);
    printf("printf:\t\tflag : [024l]\t\t[%024lo]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [-42l]\t\t[%-42lo]\n", LONG_MAX);
    printf("printf:\t\tflag : [-42l]\t\t[%-42lo]\n", LONG_MAX);
 
   
 
   
   
/*
    ****************************************
                END OCTAL TEST
    *****************************************
*/
 
/*
    ****************************************
                HEX MIN TEST
    *****************************************
*/
    printf("\n\n***************************************\n");
    printf ("\t\tHEX MIN TEST\n");
    printf("***************************************\n\n");
 
   
    ft_printf("ft_printf\tflag : [rien]\t\t[%x]\n", 0);
    printf("printf:\t\tflag : [rien]\t\t[%x]\n", 0);
    ft_printf("ft_printf\tflag : [.0]\t\t[%.0x]\n", 0);
    printf("printf:\t\tflag : [.0]\t\t[%.0x]\n", 0);
    ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0x]\n", 0);
    printf("printf:\t\tflag : [0.0]\t\t[%0.0x]\n", 0);
    ft_printf("ft_printf\tflag : [0.1]\t\t[%0.1x]\n", 0);
    printf("printf:\t\tflag : [0.1]\t\t[%0.1x]\n", 0);
    ft_printf("ft_printf\tflag : [1.0]\t\t[%1.0x]\n", 0);
    printf("printf:\t\tflag : [1.0]\t\t[%1.0x]\n", 0);
    ft_printf("ft_printf\tflag : [01.1]\t\t[%01.1x]\n", 0);
    printf("printf:\t\tflag : [01.1]\t\t[%01.1x]\n", 0);
    ft_printf("ft_printf\tflag : [rien]\t\t[%x]\n", d_octal);
    printf("printf:\t\tflag : [rien]\t\t[%x]\n", d_octal);
    ft_printf("ft_printf\tflag : [24]\t\t[%24x]\n", d_octal);
    printf("printf:\t\tflag : [24]\t\t[%24x]\n", d_octal);
    ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0x]\n", d_octal);
    printf("printf:\t\tflag : [0.0]\t\t[%0.0x]\n", d_octal);
    ft_printf("ft_printf\tflag : [0]\t\t[%0x]\n", d_octal);
    printf("printf:\t\tflag : [0]\t\t[%0x]\n", d_octal);
    ft_printf("ft_printf\tflag : [24.0]\t\t[%24.0x]\n", d_octal);
    printf("printf:\t\tflag : [24.0]\t\t[%24.0x]\n", d_octal);
    ft_printf("ft_printf\tflag : [24.1]\t\t[%24.1x]\n", d_octal);
    printf("printf:\t\tflag : [24.1]\t\t[%24.1x]\n", d_octal);
    ft_printf("ft_printf\tflag : [24.5]\t\t[%24.5x]\n", d_octal);
    printf("printf:\t\tflag : [24.5]\t\t[%24.5x]\n", d_octal);
    ft_printf("ft_printf\tflag : [-24]\t\t[%-24x]\n", d_octal);
    printf("printf:\t\tflag : [-24]\t\t[%-24x]\n", d_octal);
    ft_printf("ft_printf\tflag : [.0]\t\t[%.0x]\n", d_octal);
    printf("printf:\t\tflag : [.0]\t\t[%.0x]\n", d_octal);
    ft_printf("ft_printf\tflag : [.42]\t\t[%.42x]\n", d_octal);
    printf("printf:\t\tflag : [.42]\t\t[%.42x]\n", d_octal);
    ft_printf("ft_printf\tflag : [-.42]\t\t[%-.42x]\n", d_octal);
    printf("printf:\t\tflag : [-.42]\t\t[%-.42x]\n", d_octal);
    ft_printf("ft_printf\tflag : [h]\t\t[%hx]\n", us_octal);
    printf("printf:\t\tflag : [h]\t\t[%hx]\n", us_octal);
    ft_printf("ft_printf\tflag : [24h]\t\t[%24hx]\n", us_octal);
    printf("printf:\t\tflag : [24h]\t\t[%24hx]\n", us_octal);
    ft_printf("ft_printf\tflag : [024h]\t\t[%024hx]\n", us_octal);
    printf("printf:\t\tflag : [024h]\t\t[%024hx]\n", us_octal);
    ft_printf("ft_printf\tflag : [-24h]\t\t[%-24hx]\n", us_octal);
    printf("printf:\t\tflag : [-24h]\t\t[%-24hx]\n", us_octal);
    ft_printf("ft_printf\tflag : [0h]\t\t[%0hx]\n", us_octal);
    printf("printf:\t\tflag : [0h]\t\t[%0hx]\n", us_octal);
    ft_printf("ft_printf\tflag : [.0h]\t\t[%.0hx]\n", us_octal);
    printf("printf:\t\tflag : [.0h]\t\t[%.0hx]\n", us_octal);
    ft_printf("ft_printf\tflag : [0.0h]\t\t[%0.0hx]\n", us_octal);
    printf("printf:\t\tflag : [0.0h]\t\t[%0.0hx]\n", us_octal);
    ft_printf("ft_printf\tflag : [5.3h]\t\t[%5.3hx]\n", us_octal);
    printf("printf:\t\tflag : [5.3h]\t\t[%5.3hx]\n", us_octal);
    ft_printf("ft_printf\tflag : [2.6h]\t\t[%2.6hx]\n", us_octal);
    printf("printf:\t\tflag : [2.6h]\t\t[%2.6hx]\n", us_octal);
    ft_printf("ft_printf\tflag : [-2.6h]\t\t[%-2.6hx]\n", us_octal);
    printf("printf:\t\tflag : [-2.6h]\t\t[%-2.6hx]\n", us_octal);
    ft_printf("ft_printf\tflag : [-5.3h]\t\t[%-5.3hx]\n", us_octal);
    printf("printf:\t\tflag : [-5.3h]\t\t[%-5.3hx]\n", us_octal);
   
    printf("\n\n***************************************\n");
    printf ("\t\tLONG LONG HEX MIN TEST\n");
    printf("***************************************\n\n");
    ft_printf("ft_printf\tflag : [ll]\t\t[%llx]\n", __LONG_LONG_MAX__);
    printf("printf:\t\tflag : [ll]\t\t[%llx]\n", __LONG_LONG_MAX__);
    ft_printf("ft_printf\tflag : [.42ll]\t\t[%.42llx]\n", __LONG_LONG_MAX__);
    printf("printf:\t\tflag : [.42ll]\t\t[%.42llx]\n", __LONG_LONG_MAX__);
    ft_printf("ft_printf\tflag : [24ll]\t\t[%24llx]\n", __LONG_LONG_MAX__);
    printf("printf:\t\tflag : [24ll]\t\t[%24llx]\n", __LONG_LONG_MAX__);
    ft_printf("ft_printf\tflag : [024ll]\t\t[%024llx]\n", __LONG_LONG_MAX__);
    printf("printf:\t\tflag : [024ll]\t\t[%024llx]\n", __LONG_LONG_MAX__);
    ft_printf("ft_printf\tflag : [-42ll]\t\t[%-42llx]\n", __LONG_LONG_MAX__);
    printf("printf:\t\tflag : [-42ll]\t\t[%-42llx]\n", __LONG_LONG_MAX__);
 
    ft_printf("ft_printf\tflag : [ll]\t\t[%llx]\n", LLONG_MIN);
    printf("printf:\t\tflag : [ll]\t\t[%llx]\n", LLONG_MIN);
    ft_printf("ft_printf\tflag : [.42ll]\t\t[%.42llx]\n", LLONG_MIN);
    printf("printf:\t\tflag : [.42ll]\t\t[%.42llx]\n", LLONG_MIN);
    ft_printf("ft_printf\tflag : [24ll]\t\t[%24llx]\n", LLONG_MIN);
    printf("printf:\t\tflag : [24ll]\t\t[%24llx]\n", LLONG_MIN);
    ft_printf("ft_printf\tflag : [024ll]\t\t[%024llx]\n", LLONG_MIN);
    printf("printf:\t\tflag : [024ll]\t\t[%024llx]\n", LLONG_MIN);
    ft_printf("ft_printf\tflag : [-42ll]\t\t[%-42llx]\n", LLONG_MIN);
    printf("printf:\t\tflag : [-42ll]\t\t[%-42llx]\n", LLONG_MIN);
   
    printf("\n\n***************************************\n");
    printf ("\t\tLONG HEX MIN TEST\n");
    printf("***************************************\n\n");
    ft_printf("ft_printf\tflag : [l]\t\t[%lx]\n", LONG_MIN);
    printf("printf:\t\tflag : [l]\t\t[%lx]\n", LONG_MIN);
    ft_printf("ft_printf\tflag : [.42l]\t\t[%.42lx]\n", LONG_MIN);
    printf("printf:\t\tflag : [.42l]\t\t[%.42lx]\n", LONG_MIN);
    ft_printf("ft_printf\tflag : [24l]\t\t[%24lx]\n", LONG_MIN);
    printf("printf:\t\tflag : [24l]\t\t[%24lx]\n", LONG_MIN);
    ft_printf("ft_printf\tflag : [024l]\t\t[%024lx]\n", LONG_MIN);
    printf("printf:\t\tflag : [024l]\t\t[%024lx]\n", LONG_MIN);
    ft_printf("ft_printf\tflag : [-42l]\t\t[%-42lx]\n", LONG_MIN);
    printf("printf:\t\tflag : [-42l]\t\t[%-42lx]\n", LONG_MIN);
   
    ft_printf("ft_printf\tflag : [l]\t\t[%lx]\n", LONG_MAX);
    printf("printf:\t\tflag : [l]\t\t[%lx]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [.42l]\t\t[%.42lx]\n", LONG_MAX);
    printf("printf:\t\tflag : [.42l]\t\t[%.42lx]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [24l]\t\t[%24lx]\n", LONG_MAX);
    printf("printf:\t\tflag : [24l]\t\t[%24lx]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [024l]\t\t[%024lx]\n", LONG_MAX);
    printf("printf:\t\tflag : [024l]\t\t[%024lx]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [-42l]\t\t[%-42lx]\n", LONG_MAX);
    printf("printf:\t\tflag : [-42l]\t\t[%-42lx]\n", LONG_MAX);
/*
    ****************************************
                END HEX MIN TEST
    *****************************************
*/
 
/*
    ****************************************
                HEX MAJ TEST
    *****************************************
*/
    printf("\n\n***************************************\n");
    printf ("\t\tHEX MAJ TEST\n");
    printf("***************************************\n\n");
 
    ft_printf("ft_printf\tflag : [rien]\t\t[%X]\n", 0);
    printf("printf:\t\tflag : [rien]\t\t[%X]\n", 0);
    ft_printf("ft_printf\tflag : [.0]\t\t[%.0X]\n", 0);
    printf("printf:\t\tflag : [.0]\t\t[%.0X]\n", 0);
    ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0X]\n", 0);
    printf("printf:\t\tflag : [0.0]\t\t[%0.0X]\n", 0);
    ft_printf("ft_printf\tflag : [0.1]\t\t[%0.1X]\n", 0);
    printf("printf:\t\tflag : [0.1]\t\t[%0.1X]\n", 0);
    ft_printf("ft_printf\tflag : [1.0]\t\t[%1.0X]\n", 0);
    printf("printf:\t\tflag : [1.0]\t\t[%1.0X]\n", 0);
    ft_printf("ft_printf\tflag : [01.1]\t\t[%01.1X]\n", 0);
    printf("printf:\t\tflag : [01.1]\t\t[%01.1X]\n", 0);
    ft_printf("ft_printf\tflag : [rien]\t\t[%X]\n", d_octal);
    printf("printf:\t\tflag : [rien]\t\t[%X]\n", d_octal);
    ft_printf("ft_printf\tflag : [24]\t\t[%24X]\n", d_octal);
    printf("printf:\t\tflag : [24]\t\t[%24X]\n", d_octal);
    ft_printf("ft_printf\tflag : [0.0]\t\t[%0.0X]\n", d_octal);
    printf("printf:\t\tflag : [0.0]\t\t[%0.0X]\n", d_octal);
    ft_printf("ft_printf\tflag : [0]\t\t[%0X]\n", d_octal);
    printf("printf:\t\tflag : [0]\t\t[%0X]\n", d_octal);
    ft_printf("ft_printf\tflag : [24.0]\t\t[%24.0X]\n", d_octal);
    printf("printf:\t\tflag : [24.0]\t\t[%24.0X]\n", d_octal);
    ft_printf("ft_printf\tflag : [24.1]\t\t[%24.1X]\n", d_octal);
    printf("printf:\t\tflag : [24.1]\t\t[%24.1X]\n", d_octal);
    ft_printf("ft_printf\tflag : [24.5]\t\t[%24.5X]\n", d_octal);
    printf("printf:\t\tflag : [24.5]\t\t[%24.5X]\n", d_octal);
    ft_printf("ft_printf\tflag : [-24]\t\t[%-24X]\n", d_octal);
    printf("printf:\t\tflag : [-24]\t\t[%-24X]\n", d_octal);
    ft_printf("ft_printf\tflag : [.0]\t\t[%.0X]\n", d_octal);
    printf("printf:\t\tflag : [.0]\t\t[%.0X]\n", d_octal);
    ft_printf("ft_printf\tflag : [.42]\t\t[%.42X]\n", d_octal);
    printf("printf:\t\tflag : [.42]\t\t[%.42X]\n", d_octal);
    ft_printf("ft_printf\tflag : [-.42]\t\t[%-.42X]\n", d_octal);
    printf("printf:\t\tflag : [-.42]\t\t[%-.42X]\n", d_octal);
    ft_printf("ft_printf\tflag : [h]\t\t[%hX]\n", us_octal);
    printf("printf:\t\tflag : [h]\t\t[%hX]\n", us_octal);
    ft_printf("ft_printf\tflag : [24h]\t\t[%24hX]\n", us_octal);
    printf("printf:\t\tflag : [24h]\t\t[%24hX]\n", us_octal);
    ft_printf("ft_printf\tflag : [024h]\t\t[%024hX]\n", us_octal);
    printf("printf:\t\tflag : [024h]\t\t[%024hX]\n", us_octal);
    ft_printf("ft_printf\tflag : [-24h]\t\t[%-24hX]\n", us_octal);
    printf("printf:\t\tflag : [-24h]\t\t[%-24hX]\n", us_octal);
    ft_printf("ft_printf\tflag : [0h]\t\t[%0hX]\n", us_octal);
    printf("printf:\t\tflag : [0h]\t\t[%0hX]\n", us_octal);
    ft_printf("ft_printf\tflag : [.0h]\t\t[%.0hX]\n", us_octal);
    printf("printf:\t\tflag : [.0h]\t\t[%.0hX]\n", us_octal);
    ft_printf("ft_printf\tflag : [0.0h]\t\t[%0.0hX]\n", us_octal);
    printf("printf:\t\tflag : [0.0h]\t\t[%0.0hX]\n", us_octal);
    ft_printf("ft_printf\tflag : [5.3h]\t\t[%5.3hX]\n", us_octal);
    printf("printf:\t\tflag : [5.3h]\t\t[%5.3hX]\n", us_octal);
    ft_printf("ft_printf\tflag : [2.6h]\t\t[%2.6hX]\n", us_octal);
    printf("printf:\t\tflag : [2.6h]\t\t[%2.6hX]\n", us_octal);
    ft_printf("ft_printf\tflag : [-2.6h]\t\t[%-2.6hX]\n", us_octal);
    printf("printf:\t\tflag : [-2.6h]\t\t[%-2.6hX]\n", us_octal);
    ft_printf("ft_printf\tflag : [-5.3h]\t\t[%-5.3hX]\n", us_octal);
    printf("printf:\t\tflag : [-5.3h]\t\t[%-5.3hX]\n", us_octal);
   
    printf("\n\n***************************************\n");
    printf ("\t\tLONG LONG HEX MAJ TEST\n");
    printf("***************************************\n\n");
    ft_printf("ft_printf\tflag : [ll]\t\t[%llX]\n", __LONG_LONG_MAX__);
    printf("printf:\t\tflag : [ll]\t\t[%llX]\n", __LONG_LONG_MAX__);
    ft_printf("ft_printf\tflag : [.42ll]\t\t[%.42llX]\n", __LONG_LONG_MAX__);
    printf("printf:\t\tflag : [.42ll]\t\t[%.42llX]\n", __LONG_LONG_MAX__);
    ft_printf("ft_printf\tflag : [24ll]\t\t[%24llX]\n", __LONG_LONG_MAX__);
    printf("printf:\t\tflag : [24ll]\t\t[%24llX]\n", __LONG_LONG_MAX__);
    ft_printf("ft_printf\tflag : [024ll]\t\t[%024llX]\n", __LONG_LONG_MAX__);
    printf("printf:\t\tflag : [024ll]\t\t[%024llX]\n", __LONG_LONG_MAX__);
    ft_printf("ft_printf\tflag : [-42ll]\t\t[%-42llX]\n", __LONG_LONG_MAX__);
    printf("printf:\t\tflag : [-42ll]\t\t[%-42llX]\n", __LONG_LONG_MAX__);
 
    ft_printf("ft_printf\tflag : [ll]\t\t[%llX]\n", LLONG_MIN);
    printf("printf:\t\tflag : [ll]\t\t[%llX]\n", LLONG_MIN);
    ft_printf("ft_printf\tflag : [.42ll]\t\t[%.42llX]\n", LLONG_MIN);
    printf("printf:\t\tflag : [.42ll]\t\t[%.42llX]\n", LLONG_MIN);
    ft_printf("ft_printf\tflag : [24ll]\t\t[%24llX]\n", LLONG_MIN);
    printf("printf:\t\tflag : [24ll]\t\t[%24llX]\n", LLONG_MIN);
    ft_printf("ft_printf\tflag : [024ll]\t\t[%024llX]\n", LLONG_MIN);
    printf("printf:\t\tflag : [024ll]\t\t[%024llX]\n", LLONG_MIN);
    ft_printf("ft_printf\tflag : [-42ll]\t\t[%-42llX]\n", LLONG_MIN);
    printf("printf:\t\tflag : [-42ll]\t\t[%-42llX]\n", LLONG_MIN);
   
    printf("\n\n***************************************\n");
    printf ("\t\tLONG HEX MAJ TEST\n");
    printf("***************************************\n\n");
    ft_printf("ft_printf\tflag : [l]\t\t[%lX]\n", LONG_MIN);
    printf("printf:\t\tflag : [l]\t\t[%lX]\n", LONG_MIN);
    ft_printf("ft_printf\tflag : [.42l]\t\t[%.42lX]\n", LONG_MIN);
    printf("printf:\t\tflag : [.42l]\t\t[%.42lX]\n", LONG_MIN);
    ft_printf("ft_printf\tflag : [24l]\t\t[%24lX]\n", LONG_MIN);
    printf("printf:\t\tflag : [24l]\t\t[%24lX]\n", LONG_MIN);
    ft_printf("ft_printf\tflag : [024l]\t\t[%024lX]\n", LONG_MIN);
    printf("printf:\t\tflag : [024l]\t\t[%024lX]\n", LONG_MIN);
    ft_printf("ft_printf\tflag : [-42l]\t\t[%-42lX]\n", LONG_MIN);
    printf("printf:\t\tflag : [-42l]\t\t[%-42lX]\n", LONG_MIN);
   
    ft_printf("ft_printf\tflag : [l]\t\t[%lX]\n", LONG_MAX);
    printf("printf:\t\tflag : [l]\t\t[%lX]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [.42l]\t\t[%.42lX]\n", LONG_MAX);
    printf("printf:\t\tflag : [.42l]\t\t[%.42lX]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [24l]\t\t[%24lX]\n", LONG_MAX);
    printf("printf:\t\tflag : [24l]\t\t[%24lX]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [024l]\t\t[%024lX]\n", LONG_MAX);
    printf("printf:\t\tflag : [024l]\t\t[%024lX]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [-42l]\t\t[%-42lX]\n", LONG_MAX);
    printf("printf:\t\tflag : [-42l]\t\t[%-42lX]\n", LONG_MAX);
/*
    ****************************************
                END HEX MAJ TEST
    *****************************************
*/
 
/*
    ****************************************
                START SHARP OCTAL/HEX TEST
    *****************************************
*/
 
    printf("\n\n***************************************\n");
    printf ("\tSHARP OCTAL/HEX TEST\n");
    printf("***************************************\n\n");
 
    ft_printf("ft_printf\tflag : [#lX]\t\t[%#lX]\n", LONG_MAX);
    printf("printf:\t\tflag : [#lX]\t\t[%#lX]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [#lx]\t\t[%#lx]\n", LONG_MAX);
    printf("printf:\t\tflag : [#lx]\t\t[%#lx]\n", LONG_MAX);

    ft_printf("ft_printf\tflag : [#lo]\t\t[%#lo]\n", LONG_MAX);
    printf("printf:\t\tflag : [#lo]\t\t[%#lo]\n\n", LONG_MAX);
 
    ft_printf("ft_printf\tflag : [#25lX]\t\t[%#25lX]\n", LONG_MAX);
    printf("printf:\t\tflag : [#25lX]\t\t[%#25lX]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [#25lx]\t\t[%#25lx]\n", LONG_MAX);
    printf("printf:\t\tflag : [#25lx]\t\t[%#25lx]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [#25lo]\t\t[%#25lo]\n", LONG_MAX);
    printf("printf:\t\tflag : [#25lo]\t\t[%#25lo]\n\n", LONG_MAX);
     
    ft_printf("ft_printf\tflag : [#-25lX]\t\t[%#-25lX]\n", LONG_MAX);
    printf("printf:\t\tflag : [#-25lX]\t\t[%#-25lX]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [#-25lx]\t\t[%#-25lx]\n", LONG_MAX);
    printf("printf:\t\tflag : [#-25lx]\t\t[%#-25lx]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [#-25lo]\t\t[%#-25lo]\n", LONG_MAX);
    printf("printf:\t\tflag : [#-25lo]\t\t[%#-25lo]\n\n", LONG_MAX);
 
    ft_printf("ft_printf\tflag : [#.25lX]\t\t[%#.25lX]\n", LONG_MAX);
    printf("printf:\t\tflag : [#.25lX]\t\t[%#.25lX]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [#.25lx]\t\t[%#.25lx]\n", LONG_MAX);
    printf("printf:\t\tflag : [#.25lx]\t\t[%#.25lx]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [#.25lo]\t\t[%#.25lo]\n", LONG_MAX);
    printf("printf:\t\tflag : [#.25lo]\t\t[%#.25lo]\n\n", LONG_MAX);
 
    ft_printf("ft_printf\tflag : [#42.25lX]\t\t[%#42.25lX]\n", LONG_MAX);
    printf("printf:\t\tflag : [#42.25lX]\t\t[%#42.25lX]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [#42.25lx]\t\t[%#42.25lx]\n", LONG_MAX);
    printf("printf:\t\tflag : [#42.25lx]\t\t[%#42.25lx]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [#42.25lo]\t\t[%#42.25lo]\n", LONG_MAX);
    printf("printf:\t\tflag : [#42.25lo]\t\t[%#42.25lo]\n\n", LONG_MAX);
 
    ft_printf("ft_printf\tflag : [#-42.25lX]\t\t[%#-42.25lX]\n", LONG_MAX);
    printf("printf:\t\tflag : [#-42.25lX]\t\t[%#-42.25lX]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [#-42.25lx]\t\t[%#-42.25lx]\n", LONG_MAX);
    printf("printf:\t\tflag : [#-42.25lx]\t\t[%#-42.25lx]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [#-42.25lo]\t\t[%#-42.25lo]\n", LONG_MAX);
    printf("printf:\t\tflag : [#-42.25lo]\t\t[%#-42.25lo]\n\n", LONG_MAX);
 
    ft_printf("ft_printf\tflag : [#25.42lX]\t\t[%#25.42lX]\n", LONG_MAX);
    printf("printf:\t\tflag : [#25.42lX]\t\t[%#25.42lX]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [#25.42lx]\t\t[%#25.42lx]\n", LONG_MAX);
    printf("printf:\t\tflag : [#25.42lx]\t\t[%#25.42lx]\n", LONG_MAX);
    ft_printf("ft_printf\tflag : [#25.42lo]\t\t[%#25.42lo]\n", LONG_MAX);
    printf("printf:\t\tflag : [#25.42lo]\t\t[%#25.42lo]\n\n", LONG_MAX);
 
 
   
/*
    ****************************************
                END SHARP OCTAL/HEX TEST
    *****************************************
*/

	return (0);
}
