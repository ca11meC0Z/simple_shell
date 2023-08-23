#include "shell.h"
/**
 * _eputs - a function that displays an input string
 * @str: denotes the string intended for printing
 * Return: no content
 **/
void _eputs(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_eputchar(str[i]);
		i++;
	}
}

/**
 * _eputchar - writes the character 'c' to the standard error (stderr) stream
 * @c: the character intended for printing
 * Return: yields 1 upon success, and returns -1 otherwise
 **/
int _eputchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(2, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putfd - writes the character 'c' to the provided filedescriptor
 * @fd: file descriptor intended for writing
 * @c: refers to the file descriptor intended for writing
 * Return: yields 1 upon success, and returns -1 otherwise
 **/
int _putfd(char c, int fd)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(fd, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}

/**
 * _putsfd - a function that displays a given input string
 * @str: denotes the string that is intended for printing
 * @fd: the file descriptor designated for writing
 * Return: the count of characters placed
 **/
int _putsfd(char *str, int fd)
{
	int i = 0;

	if (!str)
		return (0);
	while (*str)
	{
		i += _putfd(*str++, fd);
	}
	return (i);
}
