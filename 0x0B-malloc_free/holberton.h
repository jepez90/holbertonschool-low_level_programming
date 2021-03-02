#ifndef HOLBERTON_H
#define HOLBERTON_H

/* _putchar - writes the character c to stdout */
int _putchar(char c);

/* create_array - creates an array of chars and fill it with a specific char.*/
char *create_array(unsigned int size, char c);

/*  returns a pointer to a newly allocated space in memory.*/
char *_strdup(char *str);

/* str_concat -  concatenates two strings.*/
char *str_concat(char *s1, char *s2);

/* alloc_grid -  returns a pointer to a 2 dimensional array of integers.*/
int **alloc_grid(int width, int height);

/* free_grid - frees a 2 dimensional grid created by your alloc_grid function*/
void free_grid(int **grid, int height);

/* argstostr - concatenates all the arguments of your program.*/
char *argstostr(int ac, char **av);

/* strtow - splits a string into words.*/
char **strtow(char *str);
#endif /* HOLBERTON_H */
