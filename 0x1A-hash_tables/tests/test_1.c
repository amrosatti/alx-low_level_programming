#include "../hash_tables.h"

/**
 * main - Tests djb2 algorithm
 * @argc: ..
 * @argv: ..
 *
 * Return: EXIT_SUCCESS (on success).
 */
int main(int argc, char **argv)
{
	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: %s string\n", *argv);
		exit(EXIT_FAILURE);
	}

	printf("%lu\n", hash_djb2((unsigned char *) *(argv + 1)));

	exit(EXIT_SUCCESS);
}
