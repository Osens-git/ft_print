#include "test.h"

void	test_dash(void)
{
	/* test for .*/

	ft_printf("############################################################\n");
	ft_printf("\n TESTS FOR . :\n\n");

	ft_printf("\n SUBCATEGORY c :\n\n");

	ft_printf("printf(\"%%-c\", 0) :\n");
	printf("  (p : %d)\n", printf("|%-c|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%-c|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%-2c\", 0) :\n");
	printf("  (p : %d)\n", printf("|%-2c|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%-2c|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%-10c\", 0) :\n");
	printf("  (p : %d)\n", printf("|%-10c|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%-10c|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%-2c\", '4') :\n");
	printf("  (p : %d)\n", printf("|%-2c|", '4'));
	ft_printf("  (f : %d)\n",  ft_printf("|%-2c|", '4'));
	ft_printf("\n");

	ft_printf("printf(\"%%-5c\", '4') :\n");
	printf("  (p : %d)\n", printf("|%-5c|", '4'));
	ft_printf("  (f : %d)\n",  ft_printf("|%-5c|", '4'));
	ft_printf("\n");

	ft_printf("\n SUBCATEGORY p :\n\n");

	ft_printf("printf(\"%%-p\", (void *) 0) :\n");
	printf("  (p : %d)\n", printf("|%-p|", (void *)0));
	ft_printf("  (f : %d)\n",  ft_printf("|%-p|", (void *)0));
	ft_printf("\n");

	ft_printf("printf(\"%%-10p\", (void *) 0) :\n");
	printf("  (p : %d)\n", printf("|%-10p|", (void *)0));
	ft_printf("  (f : %d)\n",  ft_printf("|%-10p|", (void *)0));
	ft_printf("\n");


	ft_printf("printf(\"%%-p\", (void *) -1) :\n");
	printf("  (p : %d)\n", printf("|%-p|", (void *)-1));
	ft_printf("  (f : %d)\n",  ft_printf("|%-p|", (void *)-1));
	ft_printf("\n");

	ft_printf("printf(\"%%-22p\", (void *) -1) :\n");
	printf("  (p : %d)\n", printf("|%-22p|", (void *)-1));
	ft_printf("  (f : %d)\n",  ft_printf("|%-22p|", (void *)-1));
	ft_printf("\n");
}
