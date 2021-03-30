#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

void exit_on_error(char *s1, char *s2, char *s3, int cod_error);
int string_len(char *string);
void string_reverse(char *string);
void dec_converter_uns(unsigned long dec, char *str_converted, int base);

/**
  * main - enter point.
  *
  * @argc: number of arguments passed in call to program
  * @argv: array of arguments
  *
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int file_from;
	int file_to;
	char number[] = "100";
	ssize_t bytes_readed, bytes_writen;
	char *buffer = malloc(sizeof(char) * 1024);

	if (argc != 3)
	{
		exit_on_error("Usage: cp file_from file_to\n", "", "", 97);
	}

	/*abrir archivo de origen*/
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		exit_on_error("Error: Can't read from file ", argv[1], "\n", 98);
	}

	/*abrir archivo de destino*/
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC,
		S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
	{
		exit_on_error("Error: Can't write to ", argv[2], "\n", 99);
	}

	while (1)
	{
		/*leer archivo de origen y guardar en buffer*/
		bytes_readed = read(file_from, buffer, 1024);

		if (bytes_readed == -1)
		{
			exit_on_error("Error: Can't read from file ", argv[1], "\n", 98);
		}
		else
		{
			/*escribir el archivo de destino*/
			bytes_writen = write(file_to, buffer, bytes_readed);

			if (bytes_writen == -1)
			{
				exit_on_error("Error: Can't write to ", argv[2], "\n", 99);
			}
			if (bytes_readed < 1024)
			{
				break;
			}
		}
	}

	free(buffer);

	if (!close(file_to))
	{
		dec_converter_uns((unsigned long) file_to, number, 10);
		exit_on_error("Error: Can't close fd ", number, "\n", 100);
	}
	if (close(file_from))
	{
		dec_converter_uns((unsigned long) file_from, number, 10);
		exit_on_error("Error: Can't close fd ", number, "\n", 100);
	}

	return (0);

}


/**
 * string_len - returns the length of a string.
 *
 * @string: pointer to string.
 * Return: length of string.
 */
int string_len(char *string)
{
	int length = 0;

	while (string[length++] != '\0')
	{
	}

	return (--length);
}



/**
 * exit_on_error - exits the program with cod_error and seting the stderr.
 *
 * @s1: pointer to string 1 to be concatenated
 * @s2: pointer to string 2 to be concatenated
 * @s3: pointer to string 2 to be concatenated
 * @cod_error: number of bytes of s2 to be concatenated
 *
 * Return: pointer to the string result
 */
void exit_on_error(char *s1, char *s2, char *s3, int cod_error)
{
	write(STDERR_FILENO, s1, string_len(s1));
	write(STDERR_FILENO, s2, string_len(s2));
	write(STDERR_FILENO, s3, string_len(s3));
	exit(cod_error);
}

/**
 * dec_converter_uns - changes to string an unsigned number.
 * @str_converted: secondary buffer to add numbers.
 * @dec: number to convert to string.
 * @base: base to convert number.
 *
 * Return: None.
 */
void dec_converter_uns(unsigned long dec, char *str_converted, int base)
{
	int index = 0;
	unsigned long cociente = dec;
	char letters[] = {"0123456789abcdef"};

	if (cociente == 0)
		str_converted[index++] = '0';

	while (cociente)
	{
		str_converted[index++] = letters[cociente % base];
		cociente /= base;
	}

	str_converted[index] = '\0';
	string_reverse(str_converted);
}

/**
 * string_reverse - reverses a string.
 *
 * @string: pointer to string.
 * Return: void.
 */
void string_reverse(char *string)
{

	int i, length = string_len(string);
	char hold;

	for (i = 0; i < --length; i++)
	{
		hold = string[i];
		string[i] = string[length];
		string[length] = hold;
	}
}
