#include "shell.h"
/**
 * _strcpy - a function that duplicates strings
 * @dest: the string resulting from the process
 * @src: the input string
 * Return: the memory allocated form the fresh string
 **/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (dest == src || src == 0)
		return (dest);
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}

/**
 * _strdup - a function that make a duplicate of a string
 * @str: symbolizes the string intended for replication
 * Return: the memory adresse allocated for the fresh string
 **/
char *_strdup(const char *str)
{
	int length = 0;
	char *ret;

	if (str == NULL)
		return (NULL);
	while (*str++)
		length++;
	ret = malloc(sizeof(char) * (length + 1));
	if (!ret)
		return (NULL);
	for (length++; length--;)
		ret[length] = *--str;
	return (ret);
}

/**
 * _puts - a function that displays an input string
 *  @str: stands for the string meant for printing
 *  Return: return nothing
 **/
void _puts(char *str)
{
	int i = 0;

	if (!str)
		return;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
}
/**
 * _putchar - a function to write a desired character to standard output
 * @c: stands for the character intended for printing
 * Return: 1 if the process is successful or -1 on error
 **/
int _putchar(char c)
{
	static int i;
	static char buf[WRITE_BUF_SIZE];

	if (c == BUF_FLUSH || i >= WRITE_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}
	if (c != BUF_FLUSH)
		buf[i++] = c;
	return (1);
}
