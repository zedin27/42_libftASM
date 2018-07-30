#include <unistd.h>

int		main(int argc, char *argv[])
{
	(void)argc;
	(void)argv;
	write(1, "wat\n", 4);
	return (0);
}
