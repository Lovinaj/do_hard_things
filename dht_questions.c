#include <stdio.h>

#include "dht.h"

/**
 * question - User defined fuction, entry for questions
 *
 * @num: First parameter - Locates a paticular question
 *			   by it's address in the list,
 *			   expected to be a generated random number
 *
 * Description: Contains the questions to be answered
 *
 * Return: Return question
*/

const char *question(int num)
{
	/* questions here */
	char *questions[1000] = {

		"What is the right statement to print Hello, World to standard output in C ?",
		"How do you initialize an integer in C ?",
		"What is the use of printf statement in C ?",
		"What is the value of the variable str here ?",
		"Which of the following statements is correct ?",
		"What is the right order for compilation of a C program ?",
	};
	return (questions[num]);
}
