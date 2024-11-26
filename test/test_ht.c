#include "test.h"

void test_ht(void)
{
	/* test for # and combinations*/

	ft_printf("############################################################\n");
	ft_printf("\n TESTS FOR # :\n\n");

	ft_printf("printf(\"%%#x\", 0) :\n");
	printf("  (p : %d)\n", printf("|%#x|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%#x|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%#10x\", 0) :\n");
	printf("  (p : %d)\n", printf("|%#10x|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%#10x|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%#1x\", 100000) :\n");
	printf("  (p : %d)\n", printf("|%#1x|", 100000));
	ft_printf("  (f : %d)\n",  ft_printf("|%#1x|", 100000));
	ft_printf("\n");

	ft_printf("printf(\"%%#x\", 42)) :\n");
	printf("  (p : %d)\n", printf("|%#x|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#x|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%#X\", 42)) :\n");
	printf("  (p : %d)\n", printf("|%#X|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#X|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%#X\", (unsigned int)-1)) :\n");
	printf("  (p : %d)\n", printf("|%#X|", (unsigned int)-1));
	ft_printf("  (f : %d)\n",  ft_printf("|%#X|", (unsigned int)-1));

	ft_printf("\n\n############################################################\n");
	ft_printf(" COMBINATIONS :\n\n");
	ft_printf(" COMBINATION (%#.) :\n\n");

	ft_printf("printf(\"%%#.X\", 0) :\n");
	printf("  (p : %d)\n", printf("|%#.X|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%#.X|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%#.10X\", 0) :\n");
	printf("  (p : %d)\n", printf("|%#.10X|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%#.10X|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%#.1X\", 42) :\n");
	printf("  (p : %d)\n", printf("|%#.1X|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#.1X|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%#.10X\", 42) :\n");
	printf("  (p : %d)\n", printf("|%#.10X|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#.10X|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%#.X\", (unsigned int)-1) :\n");
	printf("  (p : %d)\n", printf("|%#.X|", (unsigned int)-1));
	ft_printf("  (f : %d)\n",  ft_printf("|%#.X|", (unsigned int)-1));
	ft_printf("\n");

	ft_printf("printf(\"%%#.15X\", (unsigned int)-1) :\n");
	printf("  (p : %d)\n", printf("|%#.15X|", (unsigned int)-1));
	ft_printf("  (f : %d)\n",  ft_printf("|%#.15X|",(unsigned int)-1));
	ft_printf("\n");

	ft_printf("printf(\"%%#1.1X\", 42) :\n");
	printf("  (p : %d)\n", printf("|%#1.1X|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#1.1X|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%#10.1X\", 42) :\n");
	printf("  (p : %d)\n", printf("|%#10.1X|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#10.1X|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%#8.7X\", 42) :\n");
	printf("  (p : %d)\n", printf("|%#5.3X|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#5.3X|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%#8.3X\", 42) :\n");
	printf("  (p : %d)\n", printf("|%#8.3X|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#8.3X|", 42));
	ft_printf("\n");

	ft_printf("\n\n############################################################\n");
	ft_printf(" COMBINATION (%#-) :\n\n");

	ft_printf("printf(\"%%#-X\", 0) :\n");
	printf("  (p : %d)\n", printf("|%#-X|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%#-X|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%#-10X\", 0) :\n");
	printf("  (p : %d)\n", printf("|%#-10X|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%#-10X|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%#-X\", (unsigned int)-1) :\n");
	printf("  (p : %d)\n", printf("|%#-X|", (unsigned int)-1));
	ft_printf("  (f : %d)\n",  ft_printf("|%#-X|", (unsigned int)-1));
	ft_printf("\n");

	ft_printf("printf(\"%%#-1X\", 42) :\n");
	printf("  (p : %d)\n", printf("|%#-1X|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#-1X|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%#-10X\", 42) :\n");
	printf("  (p : %d)\n", printf("|%#-10X|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#-10X|", 42));
	ft_printf("\n");

	ft_printf("\n\n############################################################\n");
	ft_printf(" COMBINATION (%#-.) :\n\n");

	ft_printf("printf(\"%%#-.X\", 0) :\n");
	printf("  (p : %d)\n", printf("|%#-.X|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%#-.X|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%#-.10X\", 0) :\n");
	printf("  (p : %d)\n", printf("|%#-.10X|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%#-.10X|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%#-10.X\", 0) :\n");
	printf("  (p : %d)\n", printf("|%#-10.X|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%#-10.X|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%#-.10X\", 42) :\n");
	printf("  (p : %d)\n", printf("|%#-.10X|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#-.10X|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%#-10.X\", 42) :\n");
	printf("  (p : %d)\n", printf("|%#-10.X|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#-10.X|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%#-6.5X\", 42) :\n");
	printf("  (p : %d)\n", printf("|%#-6.5X|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#-6.5X|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%#-10.5X\", 42) :\n");
	printf("  (p : %d)\n", printf("|%#-10.5X|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#-10.5X|", 42));
	ft_printf("\n");

	ft_printf("\n\n############################################################\n");
	ft_printf(" COMBINATION (%#0) :\n\n");

	ft_printf("printf(\"%%#0x\", 0) :\n");
	printf("  (p : %d)\n", printf("|%#0x|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%#0x|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%#010x\", 0) :\n");
	printf("  (p : %d)\n", printf("|%#010x|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%#010x|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%#0x\", 42) :\n");
	printf("  (p : %d)\n", printf("|%#0x|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#0x|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%#010x\", 42) :\n");
	printf("  (p : %d)\n", printf("|%#010x|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#010x|", 42));
	ft_printf("\n");

	ft_printf("\n\n############################################################\n");
	ft_printf(" COMBINATION (%#0.) :\n\n");

	ft_printf("printf(\"%%#0.x\", 0) :\n");
	printf("  (p : %d)\n", printf("|%#0.x|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%#0.x|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%#010.x\", 0) :\n");
	printf("  (p : %d)\n", printf("|%#010.x|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%#010.x|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%#0.10x\", 0) :\n");
	printf("  (p : %d)\n", printf("|%#0.10x|", 0));
	ft_printf("  (f : %d)\n",  ft_printf("|%#0.10x|", 0));
	ft_printf("\n");

	ft_printf("printf(\"%%#0.x\", 42) :\n");
	printf("  (p : %d)\n", printf("|%#0.x|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#0.x|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%#0.10x\", 42) :\n");
	printf("  (p : %d)\n", printf("|%#0.10x|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#0.10x|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%#010.x\", 42) :\n");
	printf("  (p : %d)\n", printf("|%#010.x|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#010.x|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%#010.5x\", 42) :\n");
	printf("  (p : %d)\n", printf("|%#010.5x|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#010.5x|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%#02.6x\", 42) :\n");
	printf("  (p : %d)\n", printf("|%#02.6x|", 42));
	ft_printf("  (f : %d)\n",  ft_printf("|%#02.6x|", 42));
	ft_printf("\n");

	ft_printf("printf(\"%%#010.x\", (unsigned int) -1) :\n");
	printf("  (p : %d)\n", printf("|%#010.x|", (unsigned int) -1));
	ft_printf("  (f : %d)\n",  ft_printf("|%#010.x|", (unsigned int) -1));
	ft_printf("\n");
}
 