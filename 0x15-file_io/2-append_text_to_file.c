#include "main.h"
#include <string.h>
/**
* append_text_to_file - function that appends text of the end of a file
* @filename: string
* @text_content: string
* Return: 1 or -1
**/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, cw;

if (filename == NULL)
return (-1);

fd = open(filename, O_APPEND | O_WRONLY);

if (fd == -1)
return (1);


if (text_content != NULL)
cw = write(fd, text_content, strlen(text_content));

else
cw = write(fd, text_content, 0);

if (cw == -1)
return (-1);

close(fd);

return (1);
}
