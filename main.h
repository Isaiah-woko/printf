#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* main files */
int _printf(const char *format, ...);

int specifier_handler(char specifier, const char *format, int *i,

					va_list args);

/*specifiers*/
int print_chr(va_list args);
int print_int(va_list args);
int print_str(va_list args);
int print_binary(va_list args);
/*Helping Function*/
void _putchar(char c);

int _numlen(long int num);

int _pow(int num, int power);

#endif
