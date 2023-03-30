#include <stdio.h>
#include "do_hard_things.h"

int main(void)
{
	char str[5] = "Hi";

	/* scanf("%s", str); */

	printf("%c", _isnumber(str));
}
