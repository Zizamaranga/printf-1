#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
typdef struct main
{
	char *id;
	char *f;
}game;


int _printf(const char *format, ...);

int _putchar(char c);
int _strlenc(const char *str);
int _strlen(char *str);

#endif
