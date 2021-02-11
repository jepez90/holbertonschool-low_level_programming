#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>

/* _isupper - return 1 if c is uppercase or 0 otherwise */
int _isupper(int c);

/* _isdigit - return 1 if c is number since 0 to 9 or 0 otherwise. */
int _isdigit(int c);

/* mul - return the multiplication of two integers. */
int mul(int a, int b);

/* print_numbers - print digit numbers from 0 to 9*/
void print_numbers(void);

/* _putchar - writes the character c to stdout */
int _putchar(char c);

/**
 * print_most_numbers - prints the numbers, from 0 to 9,
 * (without 4 and 2) followed by a new line.
 */
void print_most_numbers(void);

/* more_numbers - prints 10 times the numbers, from 0 to 14.*/
void more_numbers(void);

/* print_line - draws a straight line in the terminal.*/
void print_line(int n);

/* print_diagonal - draws a diagonal line on the terminal.*/
void print_diagonal(int n);

/* print_square - prints a square, followed by a new line.*/
void print_square(int size);
/* print_triangle - prints a triangle, followed by a new line.*/
void print_triangle(int size);

#endif /* HOLBERTON_H */
