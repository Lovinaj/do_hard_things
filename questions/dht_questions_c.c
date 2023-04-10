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

		/* index 0 */

		"What is the right statement to print 'Hello, World' to standard output in C ?\n\n"
		"a. printf(\"Hello, World\");\n"
		"b. print(\"Hello, World\")\n"
		"c. printf(Hello, World);\n"
		"d. I don't know",

		/* index 1 */

		"How do you initialize an integer in C ?\n\n"
		"a. int num = 0;\n"
		"b. char num = 0;\n"
		"c. num = ;\n"
		"d. I don't know",

		/* index 2 */

		"What is the use of printf statement in C ?\n\n"
		"a. To assign a value to an integer variable\n"
		"b. To display a text to the standard output\n"
		"c. To initialize a variable\n"
		"d. I don't know\n",

		/* index 3 */

		"What is the output of the following code ?\n\n"
		"char str[20] = \"Hello, World\";\n"
		"printf(\"%s\", str[4]);\n\n"
		"a. o\n"
		"b. d\n"
		"c. ,\n"
		"d. I don't know",

		/* index 4 */

		"Which of the following statements is correct ?\n\n"
		"a. int num\n   scanf(\"%d\", &num);\n\n"
		"b. int num;\n   scanf(\"%d\", &num);\n\n"
		"c. int num\n   scanf(\"%d\", &num)\n\n"
		"d. I don't know",

		/* index 5 */

		"What is the right order for compilation of a C program ?\n\n"
		"a. preprocess, compile, link, assembly\n"
		"b. preprocess, assembly, compile, link\n"
		"c. preprocess, compile, assembly, link\n"
		"d. I don't know",

		/* index 6 */

		"Which of the following is a valid for statement in C ?\n\n"
		"a. for (int a = 0; a < b; a ++)\n{\n\tprintf(\"%d\n\", a);\n}\n"
		"b. for (int a == 0; a < b; a++)\n{\n\tprintf(\"%d\n\", a);\n}\n"
		"c. for (int a = 0; a < b; a++)\n{\n\tprintf(\"%d\n\", a);\n}\n"
		"d. I don't know",
	};
	return (questions[num]);
}
