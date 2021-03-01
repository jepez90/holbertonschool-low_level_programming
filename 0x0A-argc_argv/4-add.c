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
	int i, j, sum = 0;
	char *texto;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			texto = argv[i];

			for (j = 0; *(texto + j) != '\0'; j++)
			{
				if (!('0' <= *(texto + j) && *(texto + j) <= '9'))
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);

	}

	return (0);

}

