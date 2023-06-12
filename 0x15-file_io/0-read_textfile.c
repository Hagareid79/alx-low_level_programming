#include "main.h"
/**
 * read_textfile - reads text from a file and prints it
 * @filename: name of file to read
 * @letters: number of bytes to read
 * Return: number bytes read/printed
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
int x;
ssize_t y;
char z[READ_BUF_SIZE * 8];
if (!filename || !letters)
return (0);
x = open(filename, O_RDONLY);
if (x == -1)
return (0);
y = read(x, &z[0], letters);
y = write(STDOUT_FILENO, &z[0], y);
close(x);
return (y);
}
