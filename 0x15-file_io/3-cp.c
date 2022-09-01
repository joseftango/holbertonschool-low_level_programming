#include "main.h"
void cp(char *source, char *dest);
/**
* main - program that applicates cp fuction
* @argc: integer
* @argv: double pointer to a string
* Return: 0
**/

int main(int argc, char **argv)
{

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

cp(argv[1], argv[2]);

return (0);
}

/**
* cp - function that copies content of a file to an other file
* @source: string
* @dest: string
* Return: void
**/

void cp(char *source, char *dest)
{
int fd, cw, cr, cc, FD_VALUE;
char buf[1024];

fd = open(source, O_RDONLY);

cr = read(fd, buf, 1024);

if (fd == -1 || cr == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file NAME_OF_THE_FILE\n");
exit(98);
}

close(fd);

FD_VALUE = open(dest, O_TRUNC | O_CREAT | O_WRONLY, 0664);

cw = write(FD_VALUE, buf, 1024);

if (FD_VALUE == -1 ||  cw == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to NAME_OF_THE_FILE\n");
exit(99);
}

cc = close(FD_VALUE);

if (cc == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE\n");
exit(100);
}

}
