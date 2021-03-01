#include <stdio.h>
#include <stdlib.h>
/**
  * main - enter point.
  *
  * @argc: number of arguments passed in call to program
  * @argv: array of arguments
  *
  * Return: 0 if success, or 1 if error
  */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	char *texto;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]))
			{
				sum += atoi(argv[i]);
			}
			else
			{
				texto = argv[i];
				if (*texto != '0' || *(texto + 1) != '\0')
				{
					printf("Error\n");
					return (1);
				}
			}
		}

		printf("%d\n", sum);

	}

	return (0);

}

