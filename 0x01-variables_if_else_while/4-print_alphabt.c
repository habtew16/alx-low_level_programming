#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/
int main(void)
{       
        for(int i=0; i<26; i++)
        {
		if( i == 4 || i == 16)
		{
			continue;
		}
		else
		{
                	putchar('a' + i);
		}
        }       
        putchar('\n');
        
        return(0);
}   