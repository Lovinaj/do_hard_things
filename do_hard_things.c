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

const *tests(int num)
{
	/* questions here */

	char *questions[1000] =
	{
		"Joy",
		"hipa",
		"jip",
	};
	return questions[num];
}

/**
 * _isnumber - User defined function
 *
 * @str: String variable to check and validate
 *
 * Description: A function to check and validate
 *		if input contains letters or not
 *
 * Return: Return 1 or 2
*/

int _isnumber(char str[])
{
	int i, length, n;

	length = strlen(str);

	for (i = 0; i < length; i++)

	{
		return (isalpha(str[i]));
	}
}

int list(int num)
{
	int i, rndm, range;
	char str;
	for (i = 0; i <= num; i++)
	{
		/* rndm = Function for creating random integers */
		srand((unsigned)time(null));
		range = 1000; /* Total number of questions to be stored is 1000 */
		rndm = rand()%range;

		const char *test = tests(rndm);

		printf("%s", test);
		/* scanf("%[^\n]s", &str); */
	}
	return (0);
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

	if (isnumber == 0)
	{
		/* convert the string to integer */
		num_questions = atoi(str);

		if (num_questions >= 10)
			printf("\n Oops!! Question under construction");
		else
			printf("\n Invalid input");
	}
	else
	{
		printf("\n Invalid input");
	}

	return (0);

}
