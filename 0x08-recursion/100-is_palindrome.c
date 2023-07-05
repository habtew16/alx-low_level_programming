#include "main.h"
#include <string.h>

/**
 * helper - function to find if string
 * is is plaindrome or not
 * @s: string to be checked
 * @i: index of character in strin
 * Return: 1 if true
 * 0 if false
*/

int helper(char *s, int i)
{
	int len;

	len = strlen(s) - (i + 1);
	if (s[i] == s[len])
	{
		if (i + 1 == len || i == len)
		{
			return (1);
		}
		return (helper(s, i + 1));
		}
	return (0);
}

/**
 * is_palindrome - function that returns if string
 * is plaindrome
 * @s: string to be checked
 * Return: returns 1 if is palindrome else 0
*/

int is_palindrome(char *s)
{
	return (helper(s, 0));
}
