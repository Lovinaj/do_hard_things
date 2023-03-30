#include <stdio.h>
#include "do_hard_things.h"

int main(void)
{
	char str[2];

	scanf("%s", str);

	printf("%d", _isnumber(str));
}
