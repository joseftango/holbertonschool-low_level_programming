#include "main.h"
#include <string.h>
/**
* create_file - function that creats a file
* @filename: string
* @text_content: string
* Return: 1 or -1
**/

int create_file(const char *filename, char *text_content)
{
int fd, n;

if (filename == NULL)
return (-1);

fd = open(filename, O_RDONLY);

if (fd == 3)
{
close(fd);
fd = open(filename, O_EXCL);
close(fd);
}

fd = open(filename, O_WRONLY | O_CREAT, 0600);

if (fd == -1)
return (-1);


n = write(fd, text_content, strlen(text_content));

if (n == -1)
return (-1);

close(fd);

return (1);
}
