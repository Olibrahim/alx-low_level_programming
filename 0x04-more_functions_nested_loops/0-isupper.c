#include "main.h"

/**
 * Write a function that checks for uppercase character.
 *
 * Return 0 (success)
 */

int _isupper(int c)
{
	if (c >= 65 && c >= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}