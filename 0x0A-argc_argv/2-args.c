#include <stdio.h>

/**
 * main - prints all arguments it receives.
 *
 * @argc: number of arguments.
 * @argv: pointer to string arguments
 * Return: int
 */
int main(int argc, char **argv)
{
	int i = 0;

	if (argc)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
