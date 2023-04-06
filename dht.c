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
	printf("so you can know how much you're improving.");
	printf("YOU ARE NOT FORCED!\n");
	printf("Also note that you will be penalized ");
	printf("for wrong answers\n\n");

	int flag; /**
		   * Variable to check whether ctrl-D is entered
		   * If ctrl-D is entered, the program exits
		   * Also used to catch the EOF resulting from ctrl-D
		   * which results in infinite loop
		  */

	while (flag != EOF)
	{
		printf("Please enter your desired number of questions. ");
		printf("The recommended is also the minimum you can answer, ");
		printf("which is 10 >> ");

		int num_questions, length;
		char str[1000];

		flag = scanf("%s", str);

		if (flag == EOF)
			exit(0);

		int isnumber = _isnumber(str);
		printf("%d", isnumber);
		if (isnumber == 1)
		{
			/* convert the string to integer */
			num_questions = atoi(str);

			if (num_questions >= 10) /* Minimum required is 10 questions */
			{
				for (int i = 0; i < num_questions; i++)
				{
					int range = 6, random = _rand(range), j = i + 1;

					/* Display a question */
					const char *quest = question(random);

					printf("\n");
					printf("%d. %s\n\n ", j, quest);

					/* Creating a string variable to accept answer from user */
					char ans[1];

					flag = scanf("%s", ans);

					if (flag == EOF)
						exit(0);

					/**
					 * Need to convert the string input to integer
					 * since using an int input directly
					 * seems to create an infinite loop
					 * The reason, I could not decipher
					*/

					int conv_ans = atoi(ans);

					/* Check if the answer is correct */
					const char *checker = options(random, conv_ans);

					printf(" %s\n", checker);
				}
			}

			else

				printf("\n Invalid input\n\n");
		}
		else

			printf("\n Invalid input\n\n");
	}

	return (0);
}
