/* Importing the necessary header files*/

#include <stdio.h>
#include <stdlib.h>

#include "dht.h"

/**
 * main - Entry point
 *
 * Description: A program to aid learning for software engineers
 *
 * Return: Always return 0
*/

int main(void)
{
	printf("Welcome To Do_Hard_Things\n");
	printf("Try to answer the questions YOURSELF, ");
	printf("so you can know how much your improving.");
	printf("YOU ARE NOT FORCED!\n\n");

	printf("Please enter your desired number of questions. ");
	printf("The recommended is also the minimum you can answer, which is 10 >> ");

	int num_questions, length;
	char str[1000];

	scanf("%[^\n]s", str);

	int isnumber = _isnumber(str);

	if (isnumber == 1)
	{
		/* convert the string to integer */
		num_questions = atoi(str);

		if (num_questions >= 10)
		{
			for (int i = 0; i <= num_questions; i++)
			{
				const char *question = questions(_rand(range), range);
				printf("%[^\n]s", question);

				char ans[1];
				scanf("%s", ans);

				/**
				 * if (_rand(range) = 1 || 5 || 8 || ...)
				{
					if (ans == a)
						printf("You got that right")
					else
						printf("Oops! The right answer is a")
				}
				 * Creating a separate fuction for this would be preferable
				 * Especially in a separate file
				*/
		}
			printf("\n Oops!! Question under construction");
		else

			printf("\n Invalid input");
	}
	else

		printf("\n Invalid input");


	return (0);

}
