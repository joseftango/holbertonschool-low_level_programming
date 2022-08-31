#include "main.h"
/**
* read_textfile - function that reads text file and prints it to stdout
* @filename: string
* @letters: unsigned integer
* Return: actual number of letters it could read and print
**/
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, n;
char *s = (char *) malloc(letters * sizeof(char));

if (s == NULL)
return (0);

fd = open(filename, O_RDONLY);

if (filename == NULL || fd == -1)
{
return (0);
}

n = read(fd, s, letters);

s[letters] = '\0';

write(STDOUT_FILENO, s, n);

free(s);

close(fd);

return (n);
}
