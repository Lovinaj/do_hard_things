/* Importing the necessary Libraries*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * questions - User defined fuction, entry for questions
 *
 * Description: Contains the questions to be answered
 *
 * Return: Always return 0
*/

int questions(void)
{
	/* questions here */
	printf("\n Questions under construction");
}

/**
 * _isnumber - User defined function
 *
 * @str: String to check and validate
 *
 * Description: A function to check an validate if input contains letter or not
 *
 * Return: Return 1 or 2
*/

int _isnumber(char str[])
{
	int n;
	int length = strlen(str);

	for (int i = 0; i < length; i++)
	{
		if (isalpha(str[i]) != 0)
		{
			break;
			n = 1;
		}
		else
		{
			n = 2;
		}
	}
	return (n);
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

	printf("\nEnter the desired number of questions you want to answer. ");
	printf("The recommended is also the minimum you can answer, which is 10 >> ");

	int num_questions, length;
	char str[1000];

	scanf("%[^\n]s", str);

	int isnumber = _isnumber(str);

	if (isnumber == 2)
	{
		num_questions = atoi(str);
		if (num_questions >= 10)
			questions();
		else
			printf("\n Invalid input");
	}
	else
	{
		printf("Wrong");
	}

	return (0);

}