#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define BUFFER_SIZE 1024

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
/*Helping Function*/
void _putchar(char c);
int _numlen(int num);
long int _pow(int num, int power);
void buffer_insert(char character, int *buffer_index, char buffer[]);
void buffer_print(int *buffer_index, char buffer[]);

#endif
