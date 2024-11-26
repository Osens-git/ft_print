#include "test.h"

void test_plus(void)
{

	/* test for '+' and combinations*/

	ft_printf("############################################################\n");
	ft_printf("\n TESTS FOR '+' :\n\n");

	ft_printf("printf(\"%%+d\", 0) :\n");
	printf("  (p : %d)\n", printf("|%+d|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%+d|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%+10d\", 0) :\n");
	printf("  (p : %d)\n", printf("|%+10d|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%+10d|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%+1d\", 100000) :\n");
	printf("  (p : %d)\n", printf("|%+1d|", 100000));
	ft_printf("  (f : %d)\n",  ft_printf("|%+1d|", 100000));
	ft_printf("\n");

	ft_printf("printf(\"%%+2d\", -42)) :\n");
	printf("  (p : %d)\n", printf("|%+2d|", -42));
	ft_printf("  (f : %d)\n",  ft_printf("|%+2d|", -42));
	ft_printf("\n");

	ft_printf("printf(\"%%+3d\", -42)) :\n");
	printf("  (p : %d)\n", printf("|%+3d|", -42));
	ft_printf("  (f : %d)\n",  ft_printf("|%+3d|", -42));
	ft_printf("\n");

	ft_printf("printf(\"%%+4d\", -42)) :\n");
	printf("  (p : %d)\n", printf("|%+4d|", -42));
	ft_printf("  (f : %d)\n",  ft_printf("|%+4d|", -42));
	ft_printf("\n");

	ft_printf("printf(\"%%+d\", INT_MAX)) :\n");
	printf("  (p : %d)\n", printf("|%+d|", INT_MAX));
	ft_printf("  (f : %d)\n",  ft_printf("|%+d|", INT_MAX));
	ft_printf("\n");

	ft_printf("printf(\"%%+d\", INT_MIN)) :\n");
	printf("  (p : %d)\n", printf("|%+d|", INT_MIN));
	ft_printf("  (f : %d)\n",  ft_printf("|%+d|", INT_MIN));
	ft_printf("\n");


	ft_printf("\n\n############################################################\n");
	ft_printf(" COMBINATIONS :\n\n");
	ft_printf(" COMBINATION (%+.) :\n\n");

	ft_printf("printf(\"%%+.d\", 0) :\n");
	printf("  (p : %d)\n", printf("|%+.d|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%+.d|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%+.10d\", 0) :\n");
	printf("  (p : %d)\n", printf("|%+.10d|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%+.10d|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%+.1d\", 42) :\n");
	printf("  (p : %d)\n", printf("|%+.1d|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%+.1d|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%+.10d\", 42) :\n");
	printf("  (p : %d)\n", printf("|%+.10d|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%+.10d|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%+.d\", (unsigned int)-1) :\n");
	printf("  (p : %d)\n", printf("|%+.d|", (unsigned int)-1));
	ft_printf("  (f : %d)\n",  ft_printf("|%+.d|", (unsigned int)-1));
	ft_printf("\n");

	ft_printf("printf(\"%%+.15d\", (unsigned int)-1) :\n");
	printf("  (p : %d)\n", printf("|%+.15d|", (unsigned int)-1));
	ft_printf("  (f : %d)\n",  ft_printf("|%+.15d|",(unsigned int)-1));
	ft_printf("\n");

	ft_printf("printf(\"%%+1.1d\", 42) :\n");
	printf("  (p : %d)\n", printf("|%+1.1d|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%+1.1d|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%+10.1d\", 42) :\n");
	printf("  (p : %d)\n", printf("|%+10.1d|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%+10.1d|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%+8.7d\", 42) :\n");
	printf("  (p : %d)\n", printf("|%+5.3d|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%+5.3d|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%+8.3d\", 42) :\n");
	printf("  (p : %d)\n", printf("|%+8.3d|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%+8.3d|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%+8.3d\", INT_MAX) :\n");
	printf("  (p : %d)\n", printf("|%+8.3d|", INT_MAX));
	ft_printf("  (f : %d)\n",  ft_printf("|%+8.3d|", INT_MAX));
	ft_printf("\n");

	ft_printf("printf(\"%%+8.3d\", INT_MIN) :\n");
	printf("  (p : %d)\n", printf("|%+8.3d|", INT_MIN));
	ft_printf("  (f : %d)\n",  ft_printf("|%+8.3d|", INT_MIN));
	ft_printf("\n");

	ft_printf("\n\n############################################################\n");
	ft_printf(" COMBINATION (%+-) :\n\n");

	ft_printf("printf(\"%%+-d\", 0) :\n");
	printf("  (p : %d)\n", printf("|%+-d|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%+-d|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%+-10d\", 0) :\n");
	printf("  (p : %d)\n", printf("|%+-10d|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%+-10d|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%+-d\", (unsigned int)-1) :\n");
	printf("  (p : %d)\n", printf("|%+-d|", (unsigned int)-1));
	ft_printf("  (f : %d)\n",  ft_printf("|%+-d|", (unsigned int)-1));
	ft_printf("\n");

	ft_printf("printf(\"%%+-1d\", 42) :\n");
	printf("  (p : %d)\n", printf("|%+-1d|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%+-1d|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%+-15d\", INT_MAX) :\n");
	printf("  (p : %d)\n", printf("|%+-15d|", INT_MAX));
	ft_printf("  (f : %d)\n",  ft_printf("|%+-15d|", INT_MAX));
	ft_printf("\n");

	ft_printf("printf(\"%%+-15d\", INT_MIN) :\n");
	printf("  (p : %d)\n", printf("|%+-15d|", INT_MIN));
	ft_printf("  (f : %d)\n",  ft_printf("|%+-15d|", INT_MIN));
	ft_printf("\n");


	ft_printf("\n\n ############################################################\n");
	ft_printf(" COMBINATION (%+-.) :\n\n");

	ft_printf("printf(\"%%+-.d\", 0) :\n");
	printf("  (p : %d)\n", printf("|%+-.d|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%+-.d|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%+-.10d\", 0) :\n");
	printf("  (p : %d)\n", printf("|%+-.10d|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%+-.10d|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%+-10.d\", 0) :\n");
	printf("  (p : %d)\n", printf("|%+-10.d|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%+-10.d|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%+-.10d\", 42) :\n");
	printf("  (p : %d)\n", printf("|%+-.10d|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%+-.10d|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%+-10.d\", 42) :\n");
	printf("  (p : %d)\n", printf("|%+-10.d|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%+-10.d|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%+-6.5d\", 42) :\n");
	printf("  (p : %d)\n", printf("|%+-6.5d|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%+-6.5d|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%+-10.5d\", 42) :\n");
	printf("  (p : %d)\n", printf("|%+-10.5d|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%+-10.5d|", 42));
	ft_printf("\n");
}
 