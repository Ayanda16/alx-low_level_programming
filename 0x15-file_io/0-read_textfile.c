#include"main.h"
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the posix stdout
 * @filename: pointer to the filename to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters or zero if file cannot be open or read
 * if filename is NULL return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *file;
	char c;
	file= fopen("Requiescat", "RDONLY");

	if (file == NULL)
		return (0);

	while (!feof(file))
	{
		c = fgetc(file);
		printf("%c", c);
	}
	fclose(file);
	return (0);
}
