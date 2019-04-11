#include "includes/ft_printf.h"

int main() {
	double nb = 0;
//	char *str = "salut";
//	short s = -247;
//	int doub = 23.23;
//int nb = 42;

//	ft_printf("c = salut\n ouai ouai %s, ui ui %c\n", "salut", 's');
//	ft_printf("space% i|\n", nb);
//	ft_printf("test x = %x, test X = %X\n", 23, 23);
//	ft_printf("salut, %hhd ca va\n", 23);
  //  printf("printf:\t\tflag : [- ' '.42]\t[%- .42d]\n", d);

//	ft_printf("prec 0 = %.0f\n", 23.23);
//	printf("prec 0 = %.0f\n", 23.23);

//	ft_printf("ft_printf\tflag : [#lo]\t\t[%#lo]\n", LONG_MAX);
//	printf("printf:\t\tflag : [#lo]\t\t[%#lo]\n\n", LONG_MAX);

	 //printf("size + espace + zero + prec + hash:%#0 5.0f|\n", nb);
	// ft_printf("size + espace + zero + prec + hash:%#0 5.0f|\n", nb);

	printf("Plus + prec / petite:%+.0f|\n", nb);
	ft_printf("Plus + prec / petite:%+.0f|\n", nb);

//	ft_printf("precision / zero:%.0s\n", "salut");
/*	ft_printf("ft_printf:\t[%2.2s]\n", str);
	printf("printf:\t\t[%2.2s]\n", str);

	ft_printf("ft_printf:\t[%24.24hd]\n", s);
  	printf("printf:\t\t[%24.24hd]\n\n", s);

	ft_printf("ft_printf:\t[%24.2hd]\n", s);
	printf("printf:\t\t[%24.2hd]\n\n", s);*/

//	printf("test f = %f\n", doub);

	return (0);
}
