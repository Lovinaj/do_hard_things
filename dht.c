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

		if (num_questions >= 10) /* Minimum required is 10 questions */
		{
			for (int i = 0; i <= num_questions; i++)
			{
				int range = 1000, random = _rand(range);

				/* Display a question */
				const char *quest = question(random);
				printf("%s %d", quest, random);

				/* Creating a string variable to accept answer from user */
				char ans[1];
				scanf("%s", ans);

				/* Check if the answer is correct */
				const char *checker = options(random, ans);
				printf("%s\n", checker);
			}
		}

		else

			printf("\n Invalid input");
	}
	else

		printf("\n Invalid input");


	return (0);

}
