#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

#include "do_hard_things.h"

/**
 * _isnumber - User defined function
 *
 * @str: String variable to check and validate
 *
 * Description: A function to check and validate
 *              if input contains letters or not
 *
 * Return: Return isalpha()
*/

int _isnumber(char str[])
{
        int i, length;

        length = strlen(str);

        for (i = 0; i < length; i++)

        {
                return (isdigit(str[i]));
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
