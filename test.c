#include <stdio.h>
#include <string.h>

int main(void)

{

	char str[1000];

	printf("Hi >>");
	scanf("%s", str);

	int length = strlen(str);

	printf("Hey %d", length);

	return (0);

}
