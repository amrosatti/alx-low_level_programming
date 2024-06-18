#include "../hash_tables.h"

/**
 * main - Tests `key_index()` function with user input
 * @argc: ...
 * @argv: ...
 *
 * Return: 0 (on success)
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s [key] size\n", *argv);
		exit(EXIT_FAILURE);
	}

	printf("djb2 = %lu, index= %lu\n", hash_djb2((unsigned char *) *(argv + 1)), key_index((unsigned char *) *(argv + 1), atoi(*(argv + 2))));

	exit(EXIT_SUCCESS);
}
