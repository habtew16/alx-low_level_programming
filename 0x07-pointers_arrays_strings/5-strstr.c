#include "main.h"
#include <string.h>

/**
 * _strstr - function to gt substring
 * @haystack: string fro which string is searched
 * @needle: string to be searched
 * Return: returns strinng if found
*/

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
