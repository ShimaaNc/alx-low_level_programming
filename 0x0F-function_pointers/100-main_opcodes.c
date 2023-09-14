#include <stdio.h>
#include <stdlib.h>

/**
* main - check the code for Holberton School students.
* @argc: number of args.
* @argv: argument vector.
*
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
	char *opc = (char *) main;
	int i, byt;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byt = atoi(argv[1]);

	if (byt < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < byt; i++)
	{
		printf("%02x", opc[i] & 0xFF);
		if (i != byt - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
