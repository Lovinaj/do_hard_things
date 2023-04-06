#include <string.h>

#include "dht.h"

const char *options(int num, char str[])
{
	if ((num == 0 || num == 1
	|| num ==  3)
	&& (strcmp(str, "a") == 0))
		return ("Success");
	else if ((num == 2 || num == 4)
	&& (strcmp(str, "b") == 0))
		return ("Success");
	else if ((num == 5) && (strcmp(str, "c") == 0))
		return ("Success");
	else if ((num == 6) && (strcmp(str, "d") == 0))
		return ("Success");
	else
		return ("Failed");
}
