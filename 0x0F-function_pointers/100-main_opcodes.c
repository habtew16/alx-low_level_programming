#include<stdio.h>
#include<stdlib.h>

/**
 * print_opcodes - function to print opcodes
 * @numBytes: number of bytes
 * no return
*/

void print_opcodes(int numBytes)
{
	unsigned char *mainPtr;
	int i;

	mainPtr = (unsigned char *)print_opcodes;

	for (i = 0; i < numBytes; i++)
	{
		printf("%02x", mainPtr[i]);
	}
	printf("\n");
}

/**
 * main - entry poinnt
 * @argc: size of argV
 * @argv: arguments
 * Return: returns 1 if error
 * 0 if success
*/

int main(int argc, char *argv[])
{
	int numBytes;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	numBytes = atoi(argv[1]);

	if (numBytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes(numBytes);

	return (0);
}

