#include "shell.h"
/**
 * _strlen - a function that detects the legth of a given string
 * @s: a string whose length needs to be examined
 * Return: length in numerical form
 **/
int _strlen(char *s)
{
	int i = 0;

	if (!s)
		return (0);

	while (*s++)
		i++;
	return (i);
}

/**
 * _strcmp - Conduct a specialized comparison between two given strings
 * @s1: inputed string number 1
 * @s2: inputed string number 2
 * Return: -1 if s1 is less than s2, a 1 value if s1 is greater than s2, and 0 if s1 is equal to s2
 **/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 *  _strcmp - a function that verifies needle
 * @s1: desired string
 * @s2: the next string to the desired one
 * Return: -1 if s1 is less than s2, a 1 value if s1 is greater than s2, and 0 if s1 is equal to s2
 **/
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else
		return (*s1 < *s2 ? -1 : 1);
}

/**
 * starts_with -  starts_with - a function that verifies needle
 * @haystack: desired string
 * @needle: the next string to the desired one
 * Return: -1 if s1 is less than s2, a 1 value if s1 is greater than s2, and 0 if s1 is equal to s2
 **/
char *starts_with(const char *haystack, const char *needle)
{
	while (*needle)
		if (*needle++ != *haystack++)
			return (NULL);
	return ((char *)haystack);
}

/**
 * _strcat - adds two strings together
 * @dest: the target string
 * @src: the input string
 * Return: the memory adresse allocated for the string
 **/
char *_strcat(char *dest, char *src)
{
	char *ret = dest;

	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = *src;
	return (ret);
}
