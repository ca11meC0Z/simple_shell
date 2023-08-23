#include "shell.h"
/**
 * _strncpy - a function that duplicates strings
 * @dest: designates the destination string where the copy will be placed
 * @src: specifies the target string where the duplication will be stored
 * @n: the quantity of characters to be duplicated
 * Return: the string resulting from concatenation
 **/
char *_strncpy(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	while (src[i] != '\0' && i < n - 1)
	{
		dest[i] = src[i];
		i++;
	}
	if (i < n)
	{
		j = i;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 * _strncat - a function to combine two strings together
 * @dest: denotes the initial string
 * @src: denotes the subsequent string
 * @n: the maximum number of bytes to be utilized
 * Return: the string resulting from concatenation
 **/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	char *s = dest;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	if (j < n)
		dest[i] = '\0';
	return (s);
}
/**
 * _strchr - this function finds the position of a character within a string
 * @s: symbolizes the string intended for parsing
 * @c: stands for the character that needs to be searched
 * Return: returns a pointer to the memmory area where the string is strored
 **/
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
