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
        int i, length;

        length = strlen(str);

        for (i = 0; i < length; i++)

        {
		/**
		 * if a character is an integer, the isdigit function returns 0.
		 * otherwise, it returns a value greater than 0
		 * for alphabets and special characters respectively
		*/

		if (isdigit(str[i]) == 0)

			return (0);
		else
		{
			break;	/**
				 * Breaks loop once a character is not an integer
				 * to avoid junks in system memory
				*/
			return (1);
		}
	}
}

/**
 * _rand - User defined function
 *
 * @range - First and only parameter, the total number of questions
 *
 * Return: Return question[rndm]
*/

int _rand(int range)
{
	range;
	srand((unsigned)time(NULL));

	return (rand()%range);
}
