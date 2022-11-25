#include "main.h"

int main(int argc, char argv[])
{
	FILE *fd;
	char *buff = NULL;
	size_t buff_len = 0;
	ssize_t byte_read = 0;
	char *opcode = NULL, *token = NULL;
	unsigned int line_num = 0;


	if (argc != 2) // if arg is not from file descriptor
	{
		fprintf(stderr, "error Usage\n"); // printing to std err
		exit (EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	while (byte_read != -1)
	{
		byte_read = getline(&buff, &buff_len, fd);
		if (line_read == -1)
			break;
		line_num++;
		strtok(buff, delimiter.....



	}

	return (0);
}
