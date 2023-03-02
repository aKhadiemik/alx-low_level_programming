#include "main.h"

#define LOWERCASE_START 'a'
#define LOWERCASE_END 'z'
#define UPPERCASE_START 'A'
#define UPPERCASE_END 'Z'
#define DIGIT_START '0'
#define DIGIT_END '9'
#define WORD_DELIMITERS ",;.!?(){}\n\t\" "

/**
 * cap_string - capitalize all words of a string
 * @str: string
 * Return: string with capitalized words
 */

char *cap_string(char *str)
{
	int i, index;
	int is_word_start = 1;
	char c;

	for (index = 0; str[index] != '\0'; index++)
	{
		c = str[index];

		if (is_word_start && c >= LOWERCASE_START && c <= LOWERCASE_END)
		{
			str[index] -= LOWERCASE_START - UPPERCASE_START;
			is_word_start = 0;
		}
		else if ((c >= UPPERCASE_START && c <= UPPERCASE_END) ||
			(c >= DIGIT_START && c <= DIGIT_END))
		{
			is_word_start = 0;
		}
		else if (strchr(WORD_DELIMITERS, c) != NULL)
		{
			is_word_start = 1;
		}
	}

	return (str);
}

