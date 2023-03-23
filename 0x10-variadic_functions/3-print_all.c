#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_all - prints type of argument
 * @format: list of argument types
 *
 * Return: void
 */
void print_all(const char * const format, ...)
{
	const char *separator = "";
	char *s;
	int format_index = 0;
	va_list args;

	va_start(args, format);

	while (format && format[format_index])
	{
		/*if (format_index > 0)*/
			/*separator = ", ";*/

		switch (format[format_index])
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", separator, s);
				break;
			default:
				break;
		}
		separator = ", ";
		format_index++;
	}
	printf("\n"), va_end(args);
}
