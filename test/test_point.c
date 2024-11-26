#include "test.h"

void test_point(void)
{
	/* test for . and its combinations*/

	ft_printf("############################################################\n");
	ft_printf("\n TESTS FOR . combinations:\n\n");

	ft_printf(" SUBCATEGORY s :\n\n");

	ft_printf("printf(\"%%1.1s\", 0) :\n");
	printf("  (p : %d)\n", printf("|%1.1s|", ""));
	ft_printf("  (f : %d)\n",  ft_printf("|%1.1s|", ""));
	ft_printf("\n");

	ft_printf("printf(\"%%10.1s\", 0) :\n");
	printf("  (p : %d)\n", printf("|%10.1s|", ""));
	ft_printf("  (f : %d)\n",  ft_printf("|%10.1s|", ""));
	ft_printf("\n");

	ft_printf("printf(\"%%1.10s\", 0) :\n");
	printf("  (p : %d)\n", printf("|%1.10s|", ""));
	ft_printf("  (f : %d)\n",  ft_printf("|%1.10s|", ""));
	ft_printf("\n");

	ft_printf("printf(\"%%-1.1s\", 0) :\n");
	printf("  (p : %d)\n", printf("|%-1.1s|", ""));
	ft_printf("  (f : %d)\n",  ft_printf("|%-1.1s|", ""));
	ft_printf("\n");

	ft_printf("printf(\"%%-10.1s\", 0) :\n");
	printf("  (p : %d)\n", printf("|%-10.1s|", ""));
	ft_printf("  (f : %d)\n",  ft_printf("|%-10.1s|", ""));
	ft_printf("\n");

	ft_printf("printf(\"%%1.10s\", 0) :\n");
	printf("  (p : %d)\n", printf("|%-1.10s|", ""));
	ft_printf("  (f : %d)\n",  ft_printf("|%-1.10s|", ""));
	ft_printf("\n");

	ft_printf("printf(\"%%10.1s\", 0) :\n");
	printf("  (p : %d)\n", printf("|%10.1s|", "HELLO"));
	ft_printf("  (f : %d)\n",  ft_printf("|%10.1s|", "HELLO"));
	ft_printf("\n");

	ft_printf("printf(\"%%1.10s\", 0) :\n");
	printf("  (p : %d)\n", printf("|%1.10s|", "HELLO"));
	ft_printf("  (f : %d)\n",  ft_printf("|%1.10s|", "HELLO"));
	ft_printf("\n");

	ft_printf("printf(\"%%10.6s\", 0) :\n");
	printf("  (p : %d)\n", printf("|%10.6s|", "HELLO"));
	ft_printf("  (f : %d)\n",  ft_printf("|%10.6s|", "HELLO"));
	ft_printf("\n");

	ft_printf("printf(\"%%-10.1s\", 0) :\n");
	printf("  (p : %d)\n", printf("|%-10.1s|", "HELLO"));
	ft_printf("  (f : %d)\n",  ft_printf("|%-10.1s|", "HELLO"));
	ft_printf("\n");

	ft_printf("printf(\"%%-1.10s\", 0) :\n");
	printf("  (p : %d)\n", printf("|%-1.10s|", "HELLO"));
	ft_printf("  (f : %d)\n",  ft_printf("|%-1.10s|", "HELLO"));
	ft_printf("\n");

	ft_printf("printf(\"%%-10.6s\", 0) :\n");
	printf("  (p : %d)\n", printf("|%-10.6s|", "HELLO"));
	ft_printf("  (f : %d)\n",  ft_printf("|%-10.6s|", "HELLO"));
	ft_printf("\n");

	ft_printf(" SUBCATEGORY d :\n\n");

	ft_printf("printf(\"%%1.1d\", 0) :\n");
	printf("  (p : %d)\n", printf("|%1.1d|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%1.1d|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%10.1d\", 0) :\n");
	printf("  (p : %d)\n", printf("|%10.1d|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%10.1d|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%1.10d\", 0) :\n");
	printf("  (p : %d)\n", printf("|%1.10d|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%1.10d|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%1.10d\", 42) :\n");
	printf("  (p : %d)\n", printf("|%1.10d|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%1.10d|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%-1.1d\", 0) :\n");
	printf("  (p : %d)\n", printf("|%-1.1d|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%-1.1d|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%-10.1d\", 0) :\n");
	printf("  (p : %d)\n", printf("|%-10.1d|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%-10.1d|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%-1.10d\", 0) :\n");
	printf("  (p : %d)\n", printf("|%-1.10d|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%-1.10d|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%-1.10d\", 42) :\n");
	printf("  (p : %d)\n", printf("|%-1.10d|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%-1.10d|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%-8.4d\", 42) :\n");
	printf("  (p : %d)\n", printf("|%-8.4d|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%-8.4d|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%.15d\", INT_MIN) :\n");
	printf("  (p : %d)\n", printf("|%.15d|", INT_MIN));
	ft_printf("  (f : %d)\n",  ft_printf("|%.15d|", INT_MIN));
	ft_printf("\n");

	ft_printf(" SUBCATEGORY u :\n\n");

	ft_printf("printf(\"%%20.15u\",(unsigned) INT_MIN) :\n");
	printf("  (p : %d)\n", printf("|%20.15u|", (unsigned) INT_MIN));
	ft_printf("  (f : %d)\n",  ft_printf("|%20.15u|",(unsigned) INT_MIN));
	ft_printf("\n");

	ft_printf("printf(\"%%-20.15u\",(unsigned) INT_MIN) :\n");
	printf("  (p : %d)\n", printf("|%-20.15u|", (unsigned) INT_MIN));
	ft_printf("  (f : %d)\n",  ft_printf("|%-20.15u|",(unsigned) INT_MIN));
	ft_printf("\n");

	ft_printf(" SUBCATEGORY x :\n\n");

	ft_printf("printf(\"%%1.1x\", 0) :\n");
	printf("  (p : %d)\n", printf("|%1.1x|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%1.1x|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%10.1x\", 0) :\n");
	printf("  (p : %d)\n", printf("|%10.1x|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%10.1x|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%1.10x\", 0) :\n");
	printf("  (p : %d)\n", printf("|%1.10x|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%1.10x|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%1.10x\", 42) :\n");
	printf("  (p : %d)\n", printf("|%1.10x|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%1.10x|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%-1.1x\", 0) :\n");
	printf("  (p : %d)\n", printf("|%-1.1x|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%-1.1x|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%-10.1x\", 0) :\n");
	printf("  (p : %d)\n", printf("|%-10.1x|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%-10.1x|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%-1.10x\", 0) :\n");
	printf("  (p : %d)\n", printf("|%-1.10x|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%-1.10x|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%-11.10x\",(unsigned int) -1) :\n");
	printf("  (p : %d)\n", printf("|%-11.10x|", (unsigned int) -1));
	ft_printf("  (f : %d)\n",  ft_printf("|%-11.10x|", (unsigned int) -1));
	ft_printf("\n");
}
