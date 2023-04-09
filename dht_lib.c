#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#include "dht.h"

/**
 * _isnumber - User defined function
 *
 * @str: String variable to check and validate
 *
 * Description: A function to check and validate
 *              if input contains letters or not
 *
 * Return: Returns 0 or 1
*/

int _isnumber(char str[])
{
	int length, flag;

	length = strlen(str);

	for (int i = 0; i < length; i++)

	{
		/**
		 * if a character is an integer, the isdigit function returns 0.
		 * otherwise, it returns a value greater than 0
		 * for alphabets and special characters respectively
		*/

		if (isdigit(str[i]))
			flag = 1;
		else
		{
			flag = 0;
			break;	/**
				 * Breaks loop once a character is not an integer
				 * to avoid junks in system memory
				*/
		}

	}
	if (flag == 1)
		return (1);
	else
		return (0);
}

/**
 * _rand - Function to return a random number
 * @range: First and only parameter, the total number of questions
 *
 * Description: Returns a random number
 *		between 0 and the total number of questions
 *
 * Return: Return question[rndm]
*/

int _rand(int range)
{
	srand((unsigned int)time(NULL));

	return (rand() % range);
}

void questions_to_answer(void)
{
	while (1)
	{
		printf("Please enter your desired number of questions. ");
		printf("The recommended is also the minimum you can answer, ");
		printf("which is 10 >> ");

		int num_questions, flag;
		char str[1000];

		flag = scanf("%s", str);

		if (flag == EOF) /**
				  * checks if ctrl-D is entered
				  * if so, the program exits
				 */

			exit(EXIT_SUCCESS);

		int isnumber = _isnumber(str);

		if (isnumber == 1)
		{
			/* convert the string to integer */
			num_questions = atoi(str);

			if (num_questions >= 10) /* Minimum required is 10 questions */
			{
				printf(" You Requested To Answer %d Questions\n", num_questions);
				printf("\n");

				show_questions(num_questions);
			}
			else
				printf("\n Invalid input\n\n");
		}
		else
			printf("\n Invalid input\n\n");
	}
}

void show_questions(int num)
{
	int score = 0, flag;
	char *pass = "Passed";
	char *fail_a = "Failed [a]";
	char *fail_b = "Failed [b]";
	char *fail_c = "Failed [c]";

	for (int i = 0; i < num; i++)
	{
		int range = 6, random = _rand(range), j = i + 1;

		/* Display a question */
		const char *_question = question(random);

		printf("\n");
		printf("%d. %s\n\n ", j, _question);

		/* creating a string variable to accept answers from user */
		char ans[1];

		flag = scanf("%s", ans);

		if (flag == EOF)
			exit(EXIT_SUCCESS);

		/* validate if the answer is correct */
		const char *validator = answers(random, ans);

		printf(" %s\n", validator);
		if (strcmp(validator, pass) == 0)
			score = score + 1;
		else if (strcmp(validator, fail_a) == 0
		|| strcmp(validator, fail_b) == 0 || strcmp(validator, fail_c) == 0)
			score = score - 1;
		else
			score = score;
	}
	float percentage = ((float) score / num) * 100;

	printf("%d\n%.2f\n%d\n", score, percentage, num);
}