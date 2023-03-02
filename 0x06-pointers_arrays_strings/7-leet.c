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
	char leet_map[] = {'4', '3', '\0', '0', '7', '1'};
	char leet_letters[] = {'a', 'e', 'o', 't', 'l'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == leet_letters[j] || str[i] == leet_letters[j] - 32)
			{
				str[i] = leet_map[j];
				break;
			}
		}
	}
	return (str);
}
