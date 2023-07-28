#include <stdio.h>

/**
 * print_before_main - prints the code needed
 * before main functions starts
 * no return
 */
void print_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

/**
 * before_main - this executes the code writen in
 * print_ before_main function before entering into main
 * function
 * __attribute__((constructor)) is attribute that changes
 * function in to constructor function which is called before
 * main function
 */

void __attribute__((constructor)) before_main()
{
	print_before_main();
}
