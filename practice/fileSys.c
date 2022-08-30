#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

/**
 * main - practice file system
 * description - open file in write mode
 * 		write char in file pointer/desciptor
 * 		close file
 * 		open again in read mode
 * 		read the char
 * 		pront char on console
 * 		close file
 * Return: 0 on success.
 */

int main()
{
	int fd;
	char buffer[] = "#!/bin/bash\npwd\n"; // 'oHello World!'\n"; // buffer[20];

	fd = open("newFile.txt", O_CREAT | O_WRONLY, 0700);

	if (fd == -1)
	{
		printf("unable to create and open newFile\n");
		exit(1);
	}

	write(fd, buffer, 16); // write(fd, "Hello World!\n", 13);

	close(fd);

	fd = open("newFile.txt", O_RDONLY);

	if (fd == -1)
	{
		printf("unable to open and write in newFile\n");
		exit(1);
	}

	read(fd, buffer, 16);

//	buffer[13] = '\0';

	close(fd);

	printf("buffer is %s", buffer);


	return (0);
}
