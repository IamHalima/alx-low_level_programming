#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 * @argc: number o command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
