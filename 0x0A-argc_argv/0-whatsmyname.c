#include <stdio.h>

/**
 * main - prints program's name.
 *
 * @param argc - number of arguments.
 * @param argv - pointer to string arguments
 * @return int
 */
int main(int argc, char **argv)
{
	if (argc)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
