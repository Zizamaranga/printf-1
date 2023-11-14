#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

typedef struct main
{
	char *id;
	int (*f)(const char *);
}game;


int _printf(const char *format, ...);

int _putchar(char c);
int _strlenc(const char *str);
int _strlen(char *str);

#endif
