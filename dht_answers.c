#include <string.h>

#include "dht.h"

/**
 * answers - function to validate answer
 * @num: generated random integer
 * @str: string variable to accept input
 *
 * Description: each questions having the same character of answer
 *		are grouped into an if statement, the string .i.e.
 *		the user's answer, is compared with a given set of options
 *		'a,b,c, and d'
 *
 * Return: Return a string
*/

const char *answers(int num, char str[])
{
	if ((num == 0 || num == 1 || num ==  3)
	&& strcmp(str, "a") == 0)
		return ("Passed");
	else if ((num == 2 || num == 4)
	&& strcmp(str, "b") == 0)
		return ("Passed");
	else if ((num == 5) && strcmp(str, "c") == 0)
		return ("Passed");
	else if (strcmp(str, "d") == 0)
		if (num == 0 || num == 1 || num == 3)
			return ("Better luck next time [a]");
		else if (num == 2 || num == 4)
			return ("Better luck next time [b]");
		else
			return ("Better luck next time [c]");
	else
		if (num == 0 || num == 1 || num == 3)
			return ("Failed [a]");
		else if (num == 2 || num == 4)
			return ("Failed [b]");
		else
			return ("Failed [c]");
}
