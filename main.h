#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);
int *check_specifier(int i, char *copyfmt, va_list args);


int _putchar(char *c);
int *_strlen(char *s);
char *_strcpy(char *dest, const char *str);
#endif
