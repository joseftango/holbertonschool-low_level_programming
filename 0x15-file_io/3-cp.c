#include "main.h"
/**
* main - program that copy content of a file to another file
* @argc: int
* @argv: double pointer to a string
* Return: 1 or 0
**/

int main(int argc, char **argv)
{
char *file_from = argv[1];
char *file_to = argv[2];
int FD_VALUE, cr, cw, cc;
char *buf = malloc(sizeof(char) * 1024);
if (buf == NULL)
return (0);

if (argc != 3)
{
dprintf(2, "Usage: cp file_from file_to\n");
exit(97);
}

FD_VALUE = open(file_from, O_RDONLY);

cr = read(FD_VALUE, buf, 1024);

if (FD_VALUE == -1 || cr == -1)
{
dprintf(FD_VALUE, "Error: Can't read from file NAME_OF_THE_FILE\n");
exit(98);
}
close(FD_VALUE);

FD_VALUE = open(file_to, O_CREAT | O_WRONLY | O_EXCL, 0664);

cw = write(FD_VALUE, buf, 1024);

if (FD_VALUE == -1 || cw == -1)
{
dprintf(FD_VALUE, "Error: Can't write to NAME_OF_THE_FILE\n");
exit(99);
}

cc = close(FD_VALUE);

if (cc == -1)
{
dprintf(FD_VALUE, "Error: Can't close fd FD_VALUE\n");
exit(100);
}

return (0);
}
