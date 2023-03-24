/* Importing the necessary Libraries*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* _isnumber - User defined function
 *
 * Description: Checks and validates if input is contains strings or integer
 *
 * Return: Return 0 if input is integer, and 1 if input contains string
*/

int _isnumber(char str)
{
	for (int i = 0; i < strlen(str); i++)
	{
		if ((isalpha(str[i]) != 0) || (str[i] == '\0' || "\n"))
		{
			break;
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}

/* questions - User defined fuction, entry for questions
 *
 * Description: Contains the questions to be answered
 *
 * Return: Always return 0
*/

int questions(void)
{
	/* questions here */
}

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
	printf("YOU ARE NOT FORCED!\n");

	while (1)
	{

		printf("\nEnter the desired number of questions you want to answer. ");
		printf("The recommended is also the minimum you can answer, which is 10 >> ");

		int num_questions, length;
		char n[100];

		scanf("%s", n);
		int  _isnumber = _isnumber(n);

		if (_isnumber == ("0" * strlen(n)))
		{
			num_questions = atoi(n);
			if (num_questions >= 10)

			{
				questions();
			}
			else
			{
				printf("\n Expected numbers starting from 10\n");
			}
		else
		{
			printf("\n Expected numbers starting from 10\n");
		}


	}

	return (0);

}
