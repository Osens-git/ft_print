#include "test.h"

int main(int argc, char **argv)
{

	if (argc == 1)
	{
		test_dash();
		ft_printf("\n\n############################################################\n");
		test_point();
		ft_printf("\n\n############################################################\n");
		test_ht();
		ft_printf("\n\n############################################################\n");
		test_sp();
		ft_printf("\n\n############################################################\n");
		test_plus();
		return (0);
	}
	if (argv[1][0] == 'd')
		test_dash();
	if (argv[1][0] == 'p' && argv[1][1] == 'o')
		test_point();
	if (argv[1][0] == 'h')
		test_ht();
	if (argv[1][0] == 's')
		test_sp();
	if (argv[1][0] == 'p' && argv[1][1] == 'l')
		test_plus();

	return (0);	
}