#include "main.h"
/**
 *
 *
 */
int countsequence(const char *str, char char1, char char2)
{
	int count = 0;
	
	while (*str != '\0')
	{
		if (*str == char1 && *(str + 1) == char2)
		{
			count++;
		}
	str++;
	}
	return (count);
}
