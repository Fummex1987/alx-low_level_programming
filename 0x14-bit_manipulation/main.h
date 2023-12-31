#ifndef  _MAIN_H
#define  _MAIN_H




#include <stdio.h>
#include <string.h>
#include <unistd.h>

unsigned int binary_to_uint(const char *b);
int _putchar(char c);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
int clear_bit(unsigned long int *n, unsigned int index);

#endif
