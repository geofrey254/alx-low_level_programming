#ifndef VARIADICFUN_H
#define VARIADICFUN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void helper(char *str);

#endif
