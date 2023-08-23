#include "shell.h"
/**
 * interactive - this function will yield a "true" value if the shell operates in interactive mode
 * @info: holds the adress of struct
 * Return: ields 1 if operating within interactive mode; otherwise, returns 0
 **/
int interactive(info_t *info)
{
	return (isatty(STDIN_FILENO) && info->readfd <= 2);
}

/**
 * is_delim - verifies whether a character serves as a delimiter
 * @c: denotes the character to be inspected
 * @delim: stands for the delimiter of the string
 * Return: yields 1 when true, and 0 when false
 **/
int is_delim(char c, char *delim)
{
	while (*delim)
		if (*delim++ == c)
			return (1);
	return (0);
}

/**
 * _isalpha - this function verifies the presence of an alphabetic character
 * @c: denotes the inputted character
 * Return:  yields 1 if 'c' is an alphabetic character; otherwise, yields 0
 **/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/**
 * _atoi - transform strings to integers
 * @s: denotes the string to undergo conversion
 * Return: yields 0 when there are no numbers in the string; otherwise, it yields the converted number
 **/
int _atoi(char *s)
{
	int i, sign = 1, flag = 0, output;
	unsigned int result = 0;

	for (i = 0; s[i] != '\0' && flag != 2; i++)
	{
		if (s[i] == '-')
			sign *= -1;

		if (s[i] >= '0' && s[i] <= '9')
		{
			flag = 1;
			result *= 10;
			result += (s[i] - '0');
		}
		else if (flag == 1)
			flag = 2;
	}

	if (sign == -1)
		output = -result;
	else
		output = result;

	return (output);
}
