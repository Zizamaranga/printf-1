#include "main.h"
/**
 * _strlen - calculates the length of a string
 * @str: the string to be operated on
 * Return: returns the length
 */
int _strlen(char *str)
{
	int length;

	length = 0;
	
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
/**
 * _strlenc - calculates the length of a const string
 * @str: the string to be operated on
 * Return: returns the length
 */
int _strlenc(const char *str)
{
	int length;
	
	length = 0;
	
	while (*str != '\0')
	{
		length++;
		str++;
	}
	return (length);
}
