#include "main.h"

/**
 * leet - encodes string into 1337
 * @str: string to encode
 *
 * Return: pointer to encoded string
 */

char *leet(char *str)
{
	int i, j;
	char leet_map[5] = {'4', '3', '0', '7', '1'};
	char leet_letters[5][2] = {{"Aa"}, {"Ee"}, {"Oo"}, {"Tt"}, {"Ll"}};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == leet_letters[j][0] || str[i] == leet_letters[j][1])
			{
				str[i] = leet_map[j];
				break;
			}
		}
	}
	return (str);
}
