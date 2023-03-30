#include <stdio.h>

#include "do_hard_things.h"

/**
 * question - User defined fuction, entry for questions
 *
 * @num: First parameter - Locates a paticular question
 *			   by it's address in the list
 * @range: Second parameter - The total number of questions in the list
 *
 * Description: Contains the questions to be answered
 *
 * Return: Return question
*/

const char *question(int num, int range)
{
	/* questions here */

	char *questions[range] = {
		"Joy",
		"hipa",
		"jip",
	};
	return (questions[num]);
}
