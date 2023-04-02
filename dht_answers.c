#include "dht.h"

const char *options(int num, char str[])
{
	if (num == 1 || 5 || 8 || 16)
		if (str == "a")
			return ("Success");
		else
			return ("Failed");
	else if (num == 2 || 9 || 32 || 50 || 96)
		if (str == "b")
			return ("Success");
		else
			return ("Failed");
	else if (num == 3 || 4|| 6 || 7 || 10)
		if (str == "c")
			return ("Success");
		else
			return ("Failed");
	else if (num == ..........)
		if (str = "d")
			return ("Success");
		else
			return ("Failed");
	else
		return ("An error occured");
}
