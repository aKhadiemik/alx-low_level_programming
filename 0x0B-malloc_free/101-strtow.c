#include <stdlib.h>
#include <string.h>

char **strtow(char *str);

/**
 * count_words - returns the number of words in a string
 *
 * @str: string
 * Return: number of words
 */

int count_words(char *str)
{
	int count = 0, i = 0;

	while (*(str + i) != '\0')
	{
		if (*(str + i) == ' ')
		{
			i++;
			continue;
		}
		count++;
		while (*(str + i) != ' ' && *(str + i) != '\0')
		{
			i++;
		}
	}
	return (count);
}

/**
 * copy_word - copies a word from the source string to the destination string
 *
 * @dest: destination string
 * @src: source string
 */

void copy_word(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != ' ' && *(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
}

/**
 * free_words - frees memory allocated for an array of strings
 *
 * @words: array of strings
 */

void free_words(char **words)
{
	int i = 0;

	while (*(words + i) != NULL)
	{
		free(*(words + i));
		i++;
	}
	free(words);
}

/**
 * strtow - Splits a string into an array of words
 *
 * @str: string
 * Return: pointer to an array of strings, NULL if str == NULL or str == ""
 */

char **strtow(char *str)
{
	int i = 0, j = 0, num_words, word_len;
	char **words;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	num_words = count_words(str);
	words = (char **) malloc((num_words + 1) * sizeof(char *));
	if (words == NULL)
	{
		return (NULL);
	}

	while (*(str + i) != '\0' && j < num_words)
	{
		if (*(str + i) == ' ')
		{
			i++;
			continue;
		}
		word_len = 0;
		while (*(str + i + word_len) != ' ' && *(str + i + word_len) != '\0')
		{
			word_len++;
		}
		*(words + j) = (char *) malloc((word_len + 1) * sizeof(char));
		if (*(words + j) == NULL)
		{
			free_words(words);
			return (NULL);
		}
		copy_word(*(words + j), str + i);
		j++;
		i += word_len;
	}
	*(words + num_words) = NULL;
	return (words);
}
