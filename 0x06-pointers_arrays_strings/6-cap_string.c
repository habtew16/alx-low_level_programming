#include "main.h"


/**
 * indexOf - function to find index of matching letters
 * @a: character to compare
 * Return: 1 if characters match and 0
 * if doesn't
*/

int indexOf(char a)
{
		int i;
	char capArr[13] = {'\n', '\t', ' ', '.', ',', ';', ',', '!', '?', '(',
')', '{', '}'};

	for (i = 0; i < 13; i++)
	{
		if (capArr[i] == a)
			return (1);
	}
	return (0);
}
/**
 * cap_string - capitalize string if condition true
 * @str: string to be capitalized
 * Return:nnew string which is  capitalized
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (indexOf(s[i]))
			continue;
		if (str[i] >= 'a' && str[i] <= 'z' && (indexOf(str[i - 1]) || i == 0))
			str[i] = str[i] - 32;

	}
	return (str);
}
