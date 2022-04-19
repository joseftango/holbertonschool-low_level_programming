#include <stdio.h>
/**
 *main - check the code
 *@argc: argument count
 *@argv: argument value
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, j, r = 0;

	for (i = 1; i < argc ; i++)
	{
		for (j = 0 ; argv[i][j] ; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc ; i++)
	{
		{
			r += atoi(argv[i]);

		}

	}

	printf("%d\n", r);

	return (0);
}