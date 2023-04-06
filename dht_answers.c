#include "dht.h"

const char *options(int num, int num1)
{
	if (num == 1  || num == 5)
		if (num1 = 'a')
			return ("Success");
		else
			return ("Failed");
	else if (num == 2 || num == 0)
		if (num1 = 'b')
			return ("Success");
		else
			return ("Failed");
	else if (num == 3)
		if (num1 = 'c')
			return ("Success");
		else
			return ("Failed");
	else if (num == 4)
		if (num1 = 'd')
			return ("Success");
		else
			return ("Failed");
	else
		return ("An error occured");
}
