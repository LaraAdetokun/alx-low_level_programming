#include "main.h"

/**
 * _print_rev_recursion - main function
 * @s: parameter
 * Return: Void
*/

void _print_rev_recursion(char *s)
{
    if (*s)
	{
        return;

    _print_rev_recursion(s + 1);
    _putchar(*s);
   }
   else
	{
		_putchar('\n');
	}
}