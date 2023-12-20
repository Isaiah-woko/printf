#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <limits.h>
#define BUFFER_SIZE 1024
#define NUM_SPECIFIERS 13
/* main files */
int _printf(const char *format, ...);

int format_string(const char *format, va_list args);

int specifier_handler(char specifier,

					va_list args, char buffer[], int *buffer_index);

/*specifiers*/
int print_chr(va_list args, int *buffer_index, char buffer[]);

int print_int(va_list args, int *buffer_index, char buffer[]);

int print_str(va_list args, int *buffer_index, char buffer[]);

int handle_percent(int *buffer_index, char buffer[]);

int print_binary(va_list args, int *buffer_index, char buffer[]);

int print_pointer(va_list args, int *buffer_index, char buffer[]);

int print_bigstr(va_list args, int *buffer_index, char buffer[]);

int print_unsigned_int(va_list args, int *buffer_index, char buffer[]);

int print_unsigned_octal(va_list args, int *buffer_index, char bufffer[]);

int print_unsigned_hexa(va_list args, int *buffer_index, char buffer[]);

int print_unsigned_Hexa(va_list args, int *buffer_index, char buffer[]);

/*structure for printing*/

/**
* struct print - a structure for printing
* @specifier: for the specifers
* @specifier: the specifier
* @printFunc: a function pointer to the specifiers
*/

typedef struct print
{
	char specifier;

	int (*printFunc)(va_list args, int *buffer_index, char buffer[]);

} specifierFunc;

specifierFunc *initSpecifierFuncs(void);

/*custom specifiers*/
int print_revStr(va_list args, int *buffer_index, char buffer[]);

int print_rot13(va_list args, int *buffer_index, char buffer[]);

int _strlen(char *str);


/*Helping Function*/
void _putchar(char c);

int _numlen(int num);

long int _pow(int num, int power);

void buffer_insert(char character, int *buffer_index, char buffer[]);

void buffer_print(int *buffer_index, char buffer[]);
int _numlen_1(unsigned long int num);
unsigned long int _pow_1(unsigned long int num, int power);
#endif
